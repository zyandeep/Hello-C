 /* Program no : 8
 * 
 * If a five-digit number is input through the keyboard, write a
 * program to reverse the number.
 */

 #include <stdio.h>

 int main()
 {
 	int number;
 	int rev_num = 0, r = 0;

 	puts("Enter a number -->");
 	scanf("%d", &number);

 	while (number > 0)
 	{
 		r = number % 10;
 		rev_num *= 10;
 		rev_num += r;
 		number /= 10;
 	}

 	printf("The reverse number = %d\n", rev_num);

 	return 0;
 }