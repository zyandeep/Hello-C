#include <stdio.h>

int main(void)
{
	int age = 0;
	
	puts("enter your age: ");
	scanf("%d", &age);
	
	if( age >= 18) 
	{
		puts("you are an adult");
	}
	else
	{
		puts("you are a minor");
	}
	
	
	return 0;
}
