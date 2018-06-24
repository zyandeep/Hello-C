#include <stdio.h>

int main(void)
{
	char *txt = "Hello";
	
	printf("\aStratled by the sudden sound, Sally shouted, \n");
	printf("\"By the great pumpkin, what the hell was that!\" \n");
	
	*txt = 'E';

	return 0;
}
