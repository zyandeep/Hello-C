/*A lousy example of recursion */

#include <stdio.h>

void endless(void)
{
	printf("Endless!\n");
	endless();
}


int main(void)
{
	puts("I am gonna crash!");
	endless();
	
	return 0;
}