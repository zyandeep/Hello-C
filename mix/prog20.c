/*
 * Find the absolute value of a number entered through the
 * keyboard.
 */

 #include <stdio.h>

 int main(void)
 {
 	int number;
 	int abs_val = 0;

 	puts("Enter a number -->");
 	scanf("%d", &number);

 	if (number < 0)
 	{
 		abs_val = 0 - number;
 	}
 	else 
 	{
 		abs_val = number;
 	}

 	printf("Absolute value of %i is = %i\n", number, abs_val);
 	
 	return 0;
 }