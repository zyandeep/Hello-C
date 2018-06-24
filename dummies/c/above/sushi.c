// strings in C

#include <stdio.h>

int main(void)
{
	char phrase[] = "Sooshi is Mooshi";
	int i = 0;

	printf("Original string: %s\n", &phrase[0]);

	while (phrase[i])
	{
		if (phrase[i] == ' ')
			phrase[i] = '-';

		i++;
	}

	printf("Modified string: %s\n", phrase);
	
	return 0;
}