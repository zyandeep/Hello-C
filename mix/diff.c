#include <stdio.h>
#include "my_header.h"
#define SIZE 80

int main(void)
{
	char msg[SIZE] = " ";

	puts("Enter plain text ('enter' to end)...");
	
	while (fgets(msg, SIZE, stdin))
	{
		encrypt(msg);
		printf("encrypted text --> %s\n", msg);

		decrypt(msg);
		printf("decrypted text --> %s\n", msg);
	}


	/*encrypt(msg);
	printf("cipher text --> %s\n", msg);
	
	encrypt(name);
	printf("cipher text --> %s\n", name);*/

	return 0;
}
