// strings copy 

#include <stdio.h>
#include <string.h>

#define SIZE 30

int main(void)
{
	char yours[SIZE];
	char mine[SIZE] = "Zyandeep";
	int i = 0;

	printf("What is yours name: ");
	scanf("%s", yours);

	// if two names are not equal
	if (strcasecmp(yours, mine))
	{
		// strcpy(mine, yours);

		while (yours[i])
		{
			mine[i] = yours[i];
			i++;
		}

		// append the '\0' to mine
		mine[i] = '\0';
	}

	printf("My name is %s just like yours name is %s!\n", mine, yours);
	
	return 0;
}