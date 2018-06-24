/*
Write a program to find the greatest of the three numbers
entered through the keyboard using conditional operators.
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	puts("Enter three numbers -->");
	scanf("%d %d %d", &n1, &n2, &n3);

	(n1 > n2) ? ((n1 > n3) ? printf("%i\n", n1) : printf("%i\n", n3)) : 
				((n2 > n3) ? printf("%i\n", n2) : printf("%i\n", n3));

	return 0;
}