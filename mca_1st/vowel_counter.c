#include <stdio.h>
#define SIZE 50

int main(void)
{
	char string[SIZE];
	int total_vowels = 0;
	char *ptr = string;

	printf("\nEnter a string: ");
	fgets(string, SIZE, stdin);

	while(*ptr != '\0')
	{
		switch(*ptr)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				total_vowels++;
		}
		ptr++;
	}
	printf("Total number of vowels = %d\n", total_vowels);
	
	return 0;
}