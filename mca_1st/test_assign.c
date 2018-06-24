#include <stdio.h>

int main(int argc, char const *argv[])
{
	int big(int a, int b, int c);
	int a1, a2, a3, t1, t2, t3, total = 0;

	printf("Enter the test scores: ");
	scanf("%d%d%d", &t1, &t2, &t3);
	printf("Enter the assignment scores: ");
	scanf("%d%d%d", &a1, &a2, &a3);

	total = big(t1, t2, t3) + big(a1, a2, a3);

	printf("The total marks = %d\n", total);

	return 0;
}

int big(int a, int b, int c)
{
	int big_num = a;

	if (b > big_num)
		big_num = b;
	if (c > big_num)
		big_num = c;

	return big_num;
}