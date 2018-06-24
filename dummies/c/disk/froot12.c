/* Read the 13th item of fruit.txt */

#include <stdio.h>
#include <stdlib.h>

#define RECSIZE 14

int main(void)
{
	FILE *pfile;
	char fruit[RECSIZE + 1];		/* +1 for '\0' */
	int record, offset;

	pfile = fopen("fruit.txt", "r");
	if (!pfile)
	{
		puts("File \"fruit.txt\" not found");
		return 1;
	}
	printf("File pointer at %ld\n", ftell(pfile));

	/* Get record 12, record size = RECSIZE */
	record = 12;
	offset = 12 * RECSIZE;
	fseek(pfile, offset, SEEK_SET);
	
	printf("File pointer at %ld\n", ftell(pfile));
	fread(fruit, RECSIZE, 1, pfile);
	printf("%2d: %s\n", record, fruit);	
	
	fclose(pfile);
	
	return 0;
}
