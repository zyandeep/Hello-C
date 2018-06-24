/* Program no : 4
 * 
 * Temperature of a city in Fahrenheit degrees is input through
 * the keyboard. Write a program to convert this temperature
 * into Centigrade degrees.
 */

#include <stdio.h>

int main()
{
	float farhenheit = 0.0;
	float centigrade = 0.0;

	puts("Enter the temp in Fahrenheit -->");
	scanf("%f", &farhenheit); 
	
	// calculation
	centigrade = (5 * farhenheit - 32) / 9;
	
	printf("temp in Centigrade = %.2f\n", centigrade);
	
	return 0;
}

