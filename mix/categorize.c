/*
 * Data stream in C
 * Author: Zyandeep
 * Date:   29-08-2015
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char line[80];
	FILE *in = NULL;
	FILE *file1 = NULL;
	FILE *file2 = NULL;
	FILE *file3 = NULL;

	if (argc != 6)
	{
		puts("supply arguments first!");
		return 6;
	}

	in = fopen("spooky.cvs", "r");

	if (in == NULL)
	{
		puts("'spooky.cvs' does not exist");
		return 1;
	}

	file1 = fopen(argv[2], "w");
	file2 = fopen(argv[4], "w");
	file3 = fopen(argv[5], "w");

	while (fgets(line, 80, in))
	{	
		printf("%s", line);

		if (strstr(line, argv[1]))
		{
			fprintf(file1, "%s", line);
		}

		else if (strstr(line, argv[3]))
		{
			fprintf(file2, "%s", line);
		}

		else
		{
			fprintf(file3, "%s", line);
		}
	}

	fclose(file1);
	fclose(file2);
	fclose(file3);

	return 0;
}