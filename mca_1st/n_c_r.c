#include <stdio.h>

int main(void)
{
	int n, r;
	float n_c_r;
	int fact(int n);

	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the value of r: ");
	scanf("%d", &r);

	n_c_r = (float) fact(n) / (fact(r) * fact(n - r));

	printf( "%d C %d = %.2f\n", n, r, n_c_r );

	return 0;
}

int fact(int n)
{
	int i = 1, f = 1;

	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}

	return f;
}