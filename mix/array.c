#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[7] = "abc123";
	char arr2[] = "Hello\nReddit";
	char *my_ptr = arr2;
	int counter = 0, i = 0;
	char new_char;

	printf(" The array is %s\n", arr);
	printf(" The array is %s\n", arr2);
	printf("The first character of the string = %c\n", *my_ptr);

	// changing the character array through pointer
	counter = strlen(arr2);

	for (i = 1; i <= counter; i++)
	{
		if (i % 2 == 0)
			new_char = '-';
		else
			new_char = '*';

		*my_ptr = new_char;
		my_ptr++;
	}

	printf(" The string has been changed to %s\n", arr2);


	// cryptic side of array and pointer connection
	// arr[0] == *(arr + 0) == *(0 + arr) == 0[arr]

	printf("arr[0] = %c\n", arr[0]);
	printf("*(arr + 0) = %c\n", *(arr + 0));
	printf("*(0 + arr) = %c\n", *(0 + arr));
	printf("0[arr] = %c\n", 0[arr]); 

	return 0;
}