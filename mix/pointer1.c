#include <stdio.h>

int main(void)
{
	int num = 5;
	int *int_ptr = NULL;
	int **ptr = NULL;

	int_ptr = &num;
	ptr = &int_ptr;


	// printing address
	printf("address of num = %p\n", &num);
	printf("address of num = %p\n", int_ptr);
	printf("address of num = %p\n", *ptr);
	printf("address of int_ptr = %p\n", &int_ptr);
	printf("address of int_ptr = %p\n", ptr);
	printf("address of ptr = %p\n", &ptr);


	// printing value
	printf("value of num = %i\n", num);
	printf("value of num = %i\n", *(&num));
	printf("value of num = %i\n", *int_ptr);
	printf("value of num = %i\n", **(&int_ptr));
	printf("value of num = %i\n", **ptr);
	printf("value of num = %i\n", ***(&ptr));

	return 0;
}