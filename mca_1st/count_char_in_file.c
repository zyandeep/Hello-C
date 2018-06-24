#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int nol = 0, nos = 0, not = 0, noc = 0;

	fp = fopen("data.txt", "r");
	if (fp == NULL)
	{
		fprintf(stderr, "File wasn't found!\n");
		exit(1);
	}

	while(1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
			break;

		noc++;
		if (ch == '\n')
			nol++;
		else if(ch == ' ')
			nos++;
		else if(ch == '\t')
			not++;
	}

	printf("Number of lines = %d\n", nol);
	printf("Number of characters = %d\n", noc);
	printf("Number of spaces = %d\n", nos);
	printf("Number of tabs = %d\n", not);
	
	return 0;
}