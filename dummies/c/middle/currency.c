// character in decimal and hex

#include <stdio.h>

#define EURO '\xEE'
#define POUND '\x9c'
#define YEN '\x9D'
#define D2P 0.5407 
#define D2E 1.3245
#define D2Y 106.79

int main(void)
{
	float amount;
	char e = 238;
	char y = 157;
	char p = 156;

	printf("Enter amount in U.S.Doller: $" );
	scanf("%f", &amount);

	printf("Currency conversion of $%.2f in...\n", amount);
	printf("%c%5.2f\n", e, amount * D2E);
	printf("%c%5.2f\n", p, amount * D2P);
	printf("%c%5.2f\n", y, amount * D2Y);

	return 0;
}