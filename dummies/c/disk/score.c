#include <stdio.h>

int main(void)
{
	FILE *myfile;
	int s[10];
	int i;

	myfile = fopen("score.dat", "r");
	if (myfile == NULL)
	{
		puts("File not found");
		return 1;
	}

	/* Reading 10 integers off of the disk */
	for (i = 0; i < 10; ++i)
	{
		fscanf(myfile, "%i", &s[i]);
	}
	fclose(myfile);
	
	puts("High scores: ");
	for (i = 0; i < 10; ++i)
	{
		printf("%i\n", s[i]);
	}

	return 0;
}