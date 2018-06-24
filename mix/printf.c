#include <stdio.h>

int main(void)
{
	int total_characers = 0;
	int add = 0;
	
	// printf() returns an interger value of the number of total characters it printed successfully	
	total_characers = printf("Hello Reddit");
	printf("total characters = %d\n", total_characers);
	
	add = 5 + printf("Something");
	printf("total_characers = %d\n", add);
	
	printf("add = %d, %d, %d", add, add + printf(" 1234 "), printf(" 1234 ") + printf(" 1234 ") );
	
	
	return 0;
}

