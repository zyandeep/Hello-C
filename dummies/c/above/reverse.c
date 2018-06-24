#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(void)
{
	char phrase[SIZE];
	char reverse[SIZE];
	int i, j, total_char;

	puts("Enter a phrase or a line of text --");
	fgets(phrase, SIZE, stdin);

	// remove the appended '\n'
	phrase[strchr(phrase, '\n') - phrase] = '\0';

	total_char = strlen(phrase);

	// reversing the input string
	for(i = total_char - 1, j = 0; i >= 0; i--, j++)
	{
		reverse[j] = phrase[i];
	}
	reverse[j] = '\0';

	printf("Original string: %s\n", phrase);
	printf("Recersed string: %s\n", reverse);

	return 0;
}