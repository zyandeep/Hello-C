/* WAP to find the sum of natural numbers using recursion */

#include <stdio.h>
#include <conio.h>

void main()
{
	int n;
	int sum_n_nos(int n);

	printf("Enter the value of n: ");
	scanf("%d", &n);

	printf("The sum of natural nos. upto %d = %d\n", n, sum_n_nos(n));

}

int sum_n_nos(int n)
{
	if(n == 1)
		return 1;
	else
		return (n + sum_n_nos(n - 1));
}
