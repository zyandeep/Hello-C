/* 
	flushing output and input buffer
 */

#include <stdio.h>

int main(void)
{
	char c;
	int i;

	printf("Enter character and integer: ");
	c = getchar();
	scanf("%i", &i);

	printf("\n\n %c, %d\n", c, i);

	return 0;
}
