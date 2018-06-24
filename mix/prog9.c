 /* Program no : 9
 * 
 * If a four-digit number is input through the keyboard, write a
 * program to obtain the sum of the first and last digit of this
 * number.
 */

 #include <stdio.h>

 int main()
 {
 	int number;
 	int sum = -1, r = 0;

 	puts("Enter a five-digit number -->");
 	scanf("%d", &number);

 	while (number > 0)
 	{
 		r = number % 10;

 		if (sum == -1)    // only for the first time (the last digit)
 		{
 			sum = 0;
 			sum += r;
 		}
 		number /= 10;
 	}

 	sum += r;   		// the first digit

 	printf("The sum of last and first digits = %d\n", sum);

 	return 0;
 }