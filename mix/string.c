/* 
	sizeof "string" is not equal to strlen("string") 
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char full_name[40];
	char hobby[30];

	printf("Enter your full name: ");
	gets(full_name);						// use safer fgets() instead
	printf("Ente your hobby [in one word]: ");
	scanf("%s", hobby);

	printf("length of %s = %lu, size = %lu bytes\n", full_name, strlen(full_name), sizeof full_name);
	printf("length of %s = %lu, size = %lu bytes\n", hobby, strlen(hobby), sizeof hobby);


	return 0;
}
