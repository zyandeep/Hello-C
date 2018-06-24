#include <stdio.h>

int main()
{
	char *ptr = NULL;

	ptr = "Hello Reddit";
	printf("ptr = %p\n", ptr);
	printf("The string is = %s\n", ptr);

	ptr = "This is a string of text";
	printf("The string is = %s\n", ptr);

	/* the below code is gonna throw a "segmantation fault" error because a string constant/literal ("...") 
	   is not supposed to be changed. So the os never allows it.

	   *ptr = 't';
	*/
	
	ptr = "Hello Reddit";			// points to the previous "Hello Reddit" string
	printf("ptr = %p\n", ptr);
	printf("The string is = %s\n", ptr);
	
	return 0;
}
