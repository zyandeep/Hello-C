#include <stdio.h>

#define SIZE 10

int main(void)
{
	int array[SIZE] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	/*int i;
	int *ptr = array;
*/
	/*for (i = 0; i < SIZE; i++)
	{
		printf("array[%i] = %d\n", i, *ptr++);
	}*/

	//through array notation
	/*printf("The fifth prime number is: %d\n", array[4]);
	printf("and the seventh is: %d\n", array[8]);
*/	
	printf("The fifth prime number is: %d\n", 4[array]);
	printf("and the seventh is: %d\n", 8[array]);

	//through pointer
	/*printf("The fifth prime number is: %d\n", *(array + 4));
	printf("and the seventh is: %d\n", *(array + 8));*/

	printf("The fifth prime number is: %d\n", *(4 + array));
	printf("and the seventh is: %d\n", *(8 + array));
	
	return 0;
}