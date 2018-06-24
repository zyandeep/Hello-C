/* 
	Dynamic allocation/de-allocation of array using malloc() and realloc()
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check_memory(void *ptr);

int main(void)
{
	int *int_p = NULL;
	int i;

	int_p = (int *) malloc( sizeof(int) * 3 );	
	check_memory(int_p);
	
	/* inisialize the original int buffer */
	for (i = 0; i < 3; i++)
	{
		*(int_p + i) = i + 5 * 2;
	}

	puts("Original buffer...");
	for (i = 0; i < 3; i++)
	{
		printf( "Element %i = %i\n", i, *(int_p + i) );
	}

	/* Resize the buffer to hold two addtional integer */
	int_p = (int *) realloc(int_p, sizeof(int) * 5);
	check_memory(int_p);

	*(int_p + 3) = -10;
	*(int_p + 4) = -20;

	puts("Modified buffer, ver 1...");
	for (i = 0; i < 5; i++)
	{
		printf( "Element %i = %i\n", i, *(int_p + i) );
	}

	/* shrink the buffer to hold tow integer */
	int_p = (int *) realloc(int_p, sizeof(int) * 2);
	check_memory(int_p);

	puts("Modified buffer, ver 2...");
	for (i = 0; i < 2; i++)
	{
		printf( "Element %i = %i\n", i, *(int_p + i) );
	}

	free(int_p);

	return 0;
}


void check_memory(void *ptr)
{
	if (ptr == NULL)
	{
		puts("Not enough memory!");
		exit(EXIT_FAILURE);
	}
}