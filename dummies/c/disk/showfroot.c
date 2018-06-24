/* Random access to file */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *pfile;
	char fruit[15];		/* +1 for '\0' */
	int i;

	pfile = fopen("fruit.txt", "r");
	if (!pfile)
	{
		puts("File \"fruit.txt\" not found");
		return 1;
	}

	for (i = 0; i < 25; ++i)
	{
		fread(fruit, 14, 1, pfile);
		printf("%d: %s\n", i, fruit);
	}

	fclose(pfile);
	
	return 0;
}
