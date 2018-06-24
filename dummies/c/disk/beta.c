#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		puts("[error]: This program requires two arguments");
		return -1;
	}

	puts("From \"BETA\"...");
	printf("Hello %s\n", argv[1]);

	return 0;
}