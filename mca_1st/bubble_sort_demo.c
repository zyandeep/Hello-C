#include <stdio.h>
#define SIZE 10

int main(void)
{
	int data_set[SIZE];
	int i;	
	void bubble_sort(int array[], int size);

	printf("Enter 10 numbers: ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &data_set[i]);
	}
	
	puts("The array before sorting...");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", data_set[i]);
	}
	
	bubble_sort(data_set, 10);

	puts("\nThe array after sorting...");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", data_set[i]);
	}
	
	puts("");	
	return 0;
}

void bubble_sort(int array[], int size)
{
	int i, j, pass, temp;

	for (pass = size - 1; pass > 0; pass--)
	{
		for (i = 0, j = i + 1; j <= pass; i++, j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}