/* move / rename file utility */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <unistd.h>
#include "../../../includes/myheader.h"

int move_a_file(char *src_file, char *dest_file);

int main(void)
{
	char ori_path[256];
	char destin_path[256];
	char new_name[256];
	char ch;
	int len;
	char *ptr;

	puts("MoveFile - a moving file utility");
	puts("Enter the name of the original file: ");
	scanf("%s", ori_path);
	if (strlen(ori_path) == 0)					/* check for filename */
	{
		puts("Missing source filename");
		return EXIT_FAILURE;
	}

	printf("Move file ‘%s’ to directory: ", ori_path);
	scanf("%s", destin_path);
	if (strlen(destin_path) == 0)				/* check for destin_path */
	{
		puts("Missing destination directory");
		puts("Current working directory is asumed");
		strcpy(destin_path, "./");
	}

	/* clear the stdin */
	flush_input();

	len = strlen(destin_path);				/* check destin_path's last char for / */
	if (destin_path[len - 1] != '/')
	{
		destin_path[len] = '/';
		destin_path[++len] = '\0';
	}

	printf("Give the file a new name? [Y/N]: ");
	ch = getchar();
	ch = toupper(ch);

	switch (ch)
	{
		case 'Y':        			 		/* get new name and append it to its path */
			printf("Enter new name: ");
			scanf("%s", new_name);
			strcat(destin_path, new_name);
			break;

		default:
			if (ch !='N')
				puts("File will be moved keeping the original name");

			ptr = strrchr(ori_path, '/');	/* extract source flle name from its path */
			if (ptr)
			{
				strcat(destin_path, ++ptr);
			}
			else
			{
				strcat(destin_path, ori_path);
			}			
	}

	/* source file and destination path is ready */
	/* let's move the file */

	if ( move_a_file(ori_path, destin_path) ) 
	{
		puts("File couldn't moved ");
		return EXIT_FAILURE;
	}
	else 
	{
		puts("File moved successfully");
	}

	return EXIT_SUCCESS;
}


int move_a_file(char *src_file, char *dest_file)
{
	FILE *psrc;
	FILE *pdest;
	char ch;

	psrc = fopen(src_file, "r");
	pdest = fopen(dest_file, "w");

	if (psrc == NULL || pdest == NULL)
	{
		perror("fopen()");
		return EXIT_FAILURE;
	}

	/* First, copy the file */
	while ( (ch = fgetc(psrc)) != EOF )
		fputc(ch, pdest);

	fclose(psrc);
	fclose(pdest);

	/* Now, delete the original */
	if ( unlink(src_file) )
	{
		perror("unlink()");
		return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS;
}