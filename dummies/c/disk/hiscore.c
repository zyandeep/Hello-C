#include <stdio.h>

int main(void)
{
	FILE *myfile;
	int s[10] = {1000, 990, 985, 980, 970, 960, 975, 960, 950, 910};
	int i;

	myfile = fopen("score.dat", "w");
	if (myfile == NULL)
	{
		puts("Error creating file");
		return 1;
	}

	/* writing 10 numbers as string */
	for (i = 0; i < 10; ++i)
	{
		fprintf(myfile, "%i\n", s[i]);	
	}

	fclose(myfile);
	puts("High scores saved to disk!");

	return 0;
}