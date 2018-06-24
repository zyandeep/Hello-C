/* Reading every odd records */

#include <stdio.h>
#include <stdlib.h>

#define RECSIZE 14

int main(void)
{
	FILE *pfile;
	char fruit[RECSIZE + 1];		/* +1 for '\0' */
	int i;

	pfile = fopen("fruit.txt", "r");
	if (!pfile)
	{
		puts("File \"fruit.txt\" not found");
		return 1;
	}
	
	/* hop over every two record, stating from 1 */
	for (i = 1; i < 25; i+=2)
	{
		fseek(pfile, RECSIZE*i, SEEK_SET);
		fread(fruit, RECSIZE, 1, pfile);
		printf("%2d: %s\n", i, fruit);	
	}
	
	fclose(pfile);
	
	return 0;
}
