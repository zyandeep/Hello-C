// decimal to hex and octel conversion
// integer formatting with printf

#include <stdio.h>

int main(void)
{
	unsigned age;

	printf("Enter your age: ");
	scanf("%i", &age);

	printf("Your age is %d, %#x, %#o\n", age, age, age);
	puts("And now with formatting...");

	printf("\t %3d\n", age);
	printf("\t %#3x\n", age);
	printf("\t %#3o\n", age);
	
	return 0;
}