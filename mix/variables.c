#include <stdio.h>

int main(void)
{
	int age;
	float weight;
	char sex;
	
	age = 21;
	weight = 50.5;
	sex = 'M';
	
	printf("my age is %d\n", age);
	printf("my weight is %.2f\n", weight);
	printf("my sex is %c\n", sex);
	
	// in a single statement
	printf("%d, %f, %c\n", age, weight, sex);
	
	printf("Hello \t world\n");
	printf("Hello \"this\" world\n");
	
	 
	return 0;
}
