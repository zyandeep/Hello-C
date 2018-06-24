#include <stdio.h>

int main(void)
{
	unsigned short int length = 5;
	unsigned short int breath = 10; 
	unsigned short int area = 0;

	unsigned short int *my_pointer = NULL;
	printf("my_pointer = %p\n", my_pointer);

	my_pointer = &length;
	printf("my_pointer = %p\n", my_pointer);

	my_pointer = &breath;
	printf("my_pointer = %p\n", my_pointer);

	area = length * breath;
	my_pointer = &area;
	printf("my_pointer = %p\n", my_pointer);


	// what is at this memory address, the dereference operator (*)
	my_pointer = &length;
	printf("Value at %p address = %d\n", my_pointer, *my_pointer);

	my_pointer = &area;
	printf("Value at %p address = %d\n", my_pointer, *my_pointer);
	
	return 0;
}