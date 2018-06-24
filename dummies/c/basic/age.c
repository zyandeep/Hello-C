/*
	Pre- and post-incrementation in c
*/

#include <stdio.h>

int main(void)
{
	int age;

	printf("Enter your age: ");
	scanf("%i", &age);

	// after 25 years...
	age += 25;

	printf("After 25 years you'll be %d years old\n", age);

	if (age > 100)
		printf("You are probably dead now, if i ain't mistaken!\n");

	
	return 0;
}