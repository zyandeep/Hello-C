#include <stdio.h>

void show()
{
	extern short int age;
	
	printf("You are %hd years old\n", age);
}