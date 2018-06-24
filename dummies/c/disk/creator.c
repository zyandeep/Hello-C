#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	FILE *myfile;
	char ch;

	myfile = fopen("alive.txt", "r");

	if (myfile)					/* the file exist */
	{
		puts("ALIVE.TXT already exist!");
		puts("Overwrite it? [Y/N]");

		ch = toupper(ch = getchar());

		switch (ch)
		{
			case 'Y':
				goto write;
				break;
			case 'N':
				puts("Okay. Good-bye.");
				return EXIT_SUCCESS;
			default:
				puts("Wrong input");
		}		
	}

	write:
	if ( !(myfile = fopen("alive.txt", "w")) )
	{
		puts("Some kind of error");			
		return EXIT_FAILURE;
	}

	fprintf(myfile, "I created a file! It's alive!\n");

	fclose(myfile);

	return EXIT_SUCCESS;
}