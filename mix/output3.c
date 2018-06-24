// Find the output of the program

#include <stdio.h>

int main()
{
	int a, b;
	
	printf("Enter the values of a and b --> \n");
	//scanf(" %d%d ", &a, &b);						// not gonna work properly
	scanf("%d %d", &a, &b);						// works properly
	printf("a = %d, b = %d\n", a, b);
	 
	return 0;
}

