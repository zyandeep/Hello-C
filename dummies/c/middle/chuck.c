// typecasting-- change a variable type temporarily

#include <stdio.h>

int main(void)
{
	unsigned long int humongous;
	char chuk;

	for (humongous = 65; humongous <= 90; humongous++)
	{
		chuk = (char) humongous;
		putchar(chuk);
	}
	
	return 0;
}