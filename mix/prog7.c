 /* Program no : 7
 * 
 * If a five-digit number is input through the keyboard, write a
 * program to calculate the sum of its digits.
 */

 #include <stdio.h>

 int main()
 {
 	int number;
 	int sum = 0, r = 0;

 	puts("Enter a five-digit number -->");
 	scanf("%d", &number);

 	while (number > 0)
 	{
 		r = number % 10;
 		sum += r;
 		number /= 10;
 	}

 	printf("The sum of its digits = %d\n", sum);

 	return 0;
 }