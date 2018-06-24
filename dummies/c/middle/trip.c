// switch-case structure in C and the "falling through" situation

#include <stdio.h>

int main(void)
{
	char c;

	puts("Available packages: ");
	puts("A - Transportation, Hotel and Meal");
	puts("B - Transportation and Hotel");
	puts("C - Transportation only");
	printf("Select your packages: ");
	c = getchar();

	switch (c) 
	{
		case 'A':
		case 'a':
			puts("You get Meal and");
		
		case 'B':
		case 'b':
			puts("You get Hotel and");

		case 'C':
		case 'c':
			puts("You get Transportation");
			break;
			
		default:
			puts("You get nothing!");
	} 


	return 0;
}