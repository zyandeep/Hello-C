// why we need structute in C

#include <stdio.h>

int main(void)
{
	struct stuff
	{
		char letter;
		int number;
	} my, his, her;			/* declearing variable "on the fly" */

	// struct stuff my, his, her;

	/* His info */
	his.letter = 'Y';
	his.number = 199;

	/* Her info */
	her.letter = 'A';
	her.number = 29;

	puts("Your Own Stuff");
	
	printf("Enter your favourite letter: ");
	scanf("%c", &my.letter);
	printf("Enter your favourite number: ");
	scanf("%i", &my.number);

	puts(" ");
	printf("Your favourite letter is %c\n", my.letter);
	printf("and your favourite number is %d\n", my.number);
	printf("His favourite letter is %c\n", his.letter);
	printf("and his favourite number is %d\n", his.number);
	printf("Her favourite letter is %c\n", her.letter);
	printf("and her favourite number is %d\n", her.number);

	return 0;
}