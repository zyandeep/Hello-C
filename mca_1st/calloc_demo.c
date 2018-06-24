#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr, *temp_ptr;
	int size;

	printf("How many numbers do you wish to enter: ");
	scanf("%d", &size);

	ptr = (int *) calloc(size, sizeof(int));
	if (ptr == NULL)
	{
		fputs("Insufficient space!", stderr);
		exit(1);
	}

	printf("\nEnter %d numbers: \n", size);
	for (temp_ptr = ptr; temp_ptr < ptr + size; temp_ptr++)
	{
		scanf("%d", temp_ptr);
	}

	printf("The numbers you've entered along with their memory addressess...\n");
	for (temp_ptr = ptr; temp_ptr < ptr + size; temp_ptr++)
	{
		printf("%d lives at address %p\n", *temp_ptr, temp_ptr);
	}

	free(ptr);
	return 0;
}