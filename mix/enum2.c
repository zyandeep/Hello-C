#include <stdio.h>

int main(void)
{
	typedef enum { HELL, YEAH=20, BYE, OKEY } names;
	int array[7] = {1, 2, 3};
	int i;

	printf("HELL = %d\n", HELL);
	printf("YEAH = %i\n", YEAH);
	printf("BYE = %i\n", BYE);
	printf("OKEY = %d\n", OKEY);

	for (i = 0; i < 7; i++)
		printf("array[%i] = %i\n", i, array[i]);

	return 0;
 }
