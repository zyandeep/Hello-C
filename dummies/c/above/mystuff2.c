/* typedef with structure */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char letter;
	int number;
} junk;


/*typedef struct stuff
{
	char letter;
	int number;
} junk;*/

void showstuff( junk j );


int main(void)
{
	junk my;
	
	puts("Your Own Stuff");
	
	printf("Enter your favourite letter: ");
	scanf("%c", &my.letter);
	printf("Enter your favourite number: ");
	scanf("%i", &my.number);

	showstuff(my);

	return EXIT_SUCCESS;
}

void showstuff( junk j )
{
	puts(" ");
	printf("Your favourite letter is %c\n", j.letter);
	printf("and your favourite number is %d\n", j.number);
}