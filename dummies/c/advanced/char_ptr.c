#include <stdio.h>

#define SIZE 3

int main(void)
{
	const char *strings[SIZE] = {
		"Type Something: ",
		"C:\\>",
		"."
	};
	int i;
	
	// accessing each string through char *[] array
	for (i = 0; i < SIZE; i++)
	{
		puts(strings[i]);
	}

	return 0;
}