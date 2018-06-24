#include <stdio.h>

int main(void)
{
	int age = 0;
	float weight = 0.0;
	char sex;
	
	puts("enter age, weight and sex: ");
	scanf("%d%f", &age, &weight);
	
	/* remove the newline from keyboard buffer for character input by putting a '\n'
	 * in the scanf of the character input
	*/
	
	scanf("\n%c", &sex);
	
	printf("your age is %d\n", age);
	printf("your weight is %.2f\n", weight);
	printf("your sex is %c\n", sex);

	return 0;
}
