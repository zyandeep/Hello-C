#include <stdio.h>
#include <string.h>

int main(void)
{
	char keyword[20];
	char text[100] = "";

	printf("Enter some text: ");
	fgets(text, 100, stdin);

	printf("Enter the keyword to search: ");
	scanf("%[^\n]", keyword);
	
	if(strstr(text, keyword) == NULL)
		printf("The keyword is not present within the text\n");
	else
		printf("The keyword is present within the text\n");

	return 0;
}