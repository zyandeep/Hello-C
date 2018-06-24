#include <stdio.h>

int main(void)
{
	char ch;
	FILE *myfile;

	if (!(myfile = fopen("consume.c", "r")))
	{
		puts("Source code not found!");
		return 1;
	}

	puts("This is my own source code...");
	while (( ch = fgetc(myfile)) != EOF )
	{
		putchar(ch);
	}

	fclose(myfile);
	
	return 0;
}
