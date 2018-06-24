#include <stdio.h>
#define SIZE 50

void sort_data(int array[], int size);
int serach_data(int array[], int size, int key);

int main(void)
{
	int i, n, key, value;
	int data_set[SIZE];

	printf("Enter how many numbers you want to store: ");
	scanf("%d", &n);
	printf("Enter %d numbers: \n", n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &data_set[i]);
	}

	printf("Enter the number you want to search for: ");
	scanf("%d", &key);

	sort_data(data_set, n);
	value = serach_data(data_set, n, key);

	if(value == -1)
	{
		printf("%d wasn't found in the data list", key);

	}
	else
	{
		printf("%d was found at position %d in the sorted data set", key, value);
	}

	puts("");
	return 0;
}

void sort_data(int array[], int size)
{
	int i, j, temp;;

	for (i = 0; i < (size - 1); i++)
	{
		for (j = i+1; j < size; j++)
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

int serach_data(int array[], int size, int key)
{
	int start = 0, end = size - 1;
	int mid;

	while(start <= end)
	{
		mid = (start + end) / 2;

		if(array[mid] == key)
			return mid;
		else if(array[mid] > key)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return -1;
}	
