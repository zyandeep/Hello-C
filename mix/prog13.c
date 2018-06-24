 /* Program no : 9
 * 
 * If a five-digit number is input through the keyboard, write a
 * program to print a new number by adding one to each of its
 * digits. For example if the number that is input is 12391 then
 * the output should be displayed as 23402.
 */

 #include <stdio.h>

 int main(void)
 {
 	int number = 0, copy;
 	int rem = 0, new_num = 0;
 	int count = 1;

 	puts("Enter a five-digit number -->");
 	scanf("%d", &number);

 	copy = number;

 	while (number > 0)
 	{
 		rem = number % 10;

 		if (rem == 9)
 		{
 			rem = 0;
 		}
 		else
 		{
 			rem += 1;
 		}

 		new_num += rem * count;
 		count *= 10;
 		number /= 10;
 	}

 	printf("original number = %d\n", copy);
 	printf("new number = %d\n", new_num);

 	return 0;
 }