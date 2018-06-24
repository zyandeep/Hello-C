#include <stdio.h>

int main(void)
{
	float temp;

	printf("What is the temperature outside? ");
	scanf("%f", &temp);

	// if (temp < 65)
	// {
	// 	puts("It's a bit chilly out there");
	// }
	// else if (temp == 72)
	// {
	// 	puts("How perfect it is!");
	// }
	// else if (temp >= 80)
	// {
	// 	puts("It's hot out there man!");
	// }
	// else 
	// {
	// 	puts("How plasent it is!");
	// }

	if (temp >= 68 && temp <= 75)
		puts("My, How pleasent it is!");
	else
		puts("The temperature could be better");

	return 0;
}