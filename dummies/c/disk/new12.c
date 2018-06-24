/* Modify the 13th item of fruit.txt */

#include <stdio.h>
#include <stdlib.h>

#define RECSIZE 14

int main(void)
{
	FILE *pfile;
	char fruit[RECSIZE] = "Bazinga";

	pfile = fopen("fruit.txt", "r+");
	if (!pfile)
	{
		puts("File \"fruit.txt\" not found");
		return 1;
	}

	/* modify the 12th record */

	fseek(pfile, 12*RECSIZE, SEEK_SET);
	fwrite(fruit, RECSIZE, 1, pfile);
	
	fclose(pfile);
	
	return 0;
}
