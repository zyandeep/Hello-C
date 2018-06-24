#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[10];
	char output[50] = "";

	printf("Enter your first name: ");
	scanf("%s", input);
	
	strcat(output, input);
	strcat(output, " ");

	printf("Enter your last name: ");
	scanf("%s", input);
	strcat(output, input);

	printf("Your full name is %s\n", output);

	return 0;
}