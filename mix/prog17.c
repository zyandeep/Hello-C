/*
 * A five-digit number is entered through the keyboard. Write a
 * program to obtain the reversed number and to determine
 * whether the original and reversed numbers are equal or not.
 */

 #include <stdio.h>

 int main()
 {
 	int number, copy;
 	int rev_num = 0, r = 0;

 	puts("Enter a number -->");
 	scanf("%d", &number);

 	copy = number;
 	while (number > 0)
 	{
 		r = number % 10;
 		rev_num *= 10;
 		rev_num += r;
 		number /= 10;
 	}

 	printf("The reverse number = %d\n", rev_num);
 	
 	if (rev_num == copy)
 	{
 		puts("Original and reversed numbers are equal");
 	}

 	return 0;
 }