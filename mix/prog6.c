 /* Program no : 6
 * 
 * Two numbers are input through the keyboard into two
 * locations C and D. Write a program to interchange the
 * contents of C and D.
 */

 #include <stdio.h>

 int main()
 {
 	int a, b;

 	puts("Enter two numbers -->");
 	scanf("%d %d", &a, &b);

 	printf("Before swapping, a = %d  b = %d\n", a, b);
 	
 	// swapping without temp variable
 	a = a + b;
 	b = a - b;
 	a = a - b;

 	printf("After swapping, a = %d  b = %d\n", a, b);

 	return 0;
 }