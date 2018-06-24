#include <stdio.h>

int main(void)
{
	char ch;
	FILE *myfile;

	if ( !(myfile = fopen("alive.txt", "r")) )
	{
		puts("\"Alive.txt\" not found!");
		return 1;
	}

	while ((ch = fgetc(myfile)) != EOF)
	{
		putchar(ch);
	}

	fclose(myfile);
	
	return 0;
}