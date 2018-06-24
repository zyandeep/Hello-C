/* WAP to find all the prime no.s in an interval */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int first_no, last_no;
	void find_prime(int f, int l);

	printf("Enter the first no. of the interval: ");
	scanf("%d", &first_no);
	printf("Enter the last no. of the interval: ");
	scanf("%d", &last_no);

	printf("The prime numbers between the interval %d and %d are...\n", first_no, last_no);
	find_prime(first_no, last_no);

	printf("\n");
	return 0;
}

void find_prime(int f, int l)
{
	int i, is_prime;

	for (f; f <= l; f++)
	{
		is_prime = 1;		/* Let's assume every no. is a prime no */ 

		for (i = 2; i <= (f / 2); i++)
		{
			if(f % i == 0)
			{
				is_prime = 0;
				break;		
			}
		}
		
		/* Since 0 and 1 are not prime, so.. */
		if (f != 0 && f != 1 && is_prime == 1)
			printf("%d ", f);
	}
}