/* getchar() is a bufferd input function. 
	It continues to read and store character in buffer unlill ENTER key is pressed
*/

#include <stdio.h>

int main(void)
{
	char s;

	printf("Please type a character: ");
	s = getchar();
	printf("Thank you for typing %c character. \n", s);

	printf("Please type a character: ");
	s = getchar();
	printf("Thank you for typing %c character. \n", s);

	printf("Please type a character: ");
	s = getchar();
	printf("Thank you for typing %c character. \n", s);

	printf("Please type a character: ");
	s = getchar();
	printf("Thank you for typing %c character. \n", s);

	return 0;
}
