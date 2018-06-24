/* Random access to file */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fruits[25][14] = {
		"Apple", "Avocado", "Banana", "Blackberry", "Boysenberry",
		"Cantaloupe", "Cherry", "Coconut", "Cranberry", "Cumquat",
		"Grape", "Guava", "Mango", "Marionberry", "Melon",
		"Orange", "Papaya", "Peach", "Pear", "Persimmon",
		"Pineapple", "Plum", "Raspberry",
		"Strawberry", "Watermelon"
	};
	
	FILE *pfile;
	int i;

	pfile = fopen("/home/zyandeep/fruit.txt", "w");
	if (!pfile)
	{
		puts("Error creating file \"fruit.txt\"");
		return 1;
	}

	printf("After file opened, file pointer = %ld\n", ftell(pfile));

	for (i = 0; i < 25; ++i)
	{
		fwrite(fruits[i], 14, 1, pfile);
		printf("Wrote record %d, file pointer = %ld\n", i+1, ftell(pfile));
	}

	fclose(pfile);
	
	return 0;
}
