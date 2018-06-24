/* Copying or Duplicating a File */

#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[])
{
	FILE *original, *duplicate;
	char ch;

	if (argc != 3)
	{
		puts("Missing argument");
		puts("try: copy <original> <duplicate>");

		return 1;
	}

	/* open both files */
	original = fopen(argv[1], "r");
	duplicate = fopen(argv[2], "w");

	while ( (ch = fgetc(original)) != EOF )
		fputc(ch, duplicate);

	fclose(original);
	fclose(duplicate);
	puts("File copied!");

	return 0;
}