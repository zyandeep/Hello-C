#include <stdio.h>
#define MAX 50

int main(void)
{
	int data_set[MAX];
	int i, n, key, pos;	
	int linear_search(int array[], int size, int key);

	printf("Enter how many numners you want to store: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &data_set[i]);
	}
	printf("Enter the number you want to search for: ");
	scanf("%d", &key);

	pos = linear_search(data_set, n, key);
	if (pos == -1)
	{
		printf("%d wasn't found\n", key);
	}
	else
	{
		printf("%d was found at position %d\n", key, pos + 1);
	}

	return 0;
}

int linear_search(int array[], int size, int key)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if(array[i] == key)
			return i;
	}
	return -1;
}