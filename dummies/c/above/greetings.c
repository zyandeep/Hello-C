// strings in C

#include <stdio.h>

int main(void)
{
	char prompt[] = "Please enter your first name: ";
	char gratis[] = "Thanks!";
	char first[25];
	char last[25];

	printf("%s", prompt);
	// gets(first);

	scanf("%s", &first[0]);
	printf("Please enter your last name: ");
	scanf("%s", last);
	puts(gratis);

	printf("Pleased to meet you, %s %s\n", first, last);

	return 0;
}