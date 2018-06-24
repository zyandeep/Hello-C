#include <stdio.h>

int main(void)
{ 
	int integer_num = 5;
	unsigned int un = 10;
	char my_character = 'a';

	// %i = signed integer, %d = signed decimal
	printf("signed integer = %i and %d\n", integer_num, integer_num);

	// %u = unsigned int
	printf("unsigned integer = %u\n", un);

	printf("my_character = %c\n", my_character);

	printf("a (null terminated)string = %s\n", "A piece of string");

	// mixing up data types
	printf("signed integer = %i, unsigned integer = %u, character = %c, string = %s\n", 
			integer_num, un, my_character, "Hello World!");

	return 0;
}