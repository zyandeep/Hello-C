/* Garbage in variable 
   sizeof operator takes variable / data-type of: traditional, user-defined, derrieved 
*/

#include <stdio.h>

int main(void)
{
	char c;
	short int si;
	int i;
	long li;
	float f;
	double d;
	char carray[8];
	int iarray[8];
	double darray[8];

	/*printf("char variable c = %c\n", c);
	printf("short int variable si = %hi\n", si);
	printf("int variable i = %i\n", i);
	printf("long int variable li = %ld\n", li);
	printf("float variable f = %f\n", f);
	printf("double variable d = %f\n", d);*/

	/*puts("Variable sizes...");
	printf("size of char variable c = %lu byte\n", sizeof(c));
	printf("size of short int variable si = %lu bytes\n", sizeof(si));
	printf("size of int variable i = %lu bytes\n", sizeof(i));
	printf("size of long int variable li = %lu bytes\n", sizeof(li));
	printf("size of float variable f = %lu bytes\n", sizeof(f));
	printf("size of double variable d = %lu bytes\n", sizeof(d));
	printf("size of char array carray = %lu bytes\n", sizeof(carray));
	printf("size of int array iarray = %lu bytes\n", sizeof(iarray));
	printf("size of double array darray = %lu bytes\n", sizeof(darray));*/

	puts("Variable addresses...");
	printf("Memory location of char variable c = %p\n", &c);
	printf("Memory location of short int variable si = %p\n", &si);
	printf("Memory location of int variable i = %p\n", &i);
	printf("Memory location of float variable f = %p\n", &f);
	printf("Memory location of double variable d = %p\n", &d);

	for (i = 0; i < 8; i++)
		printf("Memory location of carray[%d] = %p\n", i, &carray[i]);


	return 0;
}