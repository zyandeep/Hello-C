#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char name_input[70] = "./beta \"";
	int length = 0;

	printf("Enter your name: ");
	fgets( (name_input + 8), 62, stdin );

	length = strlen(name_input);

	/* add the ending " */
	if ( length < 69 )
	{
		name_input[length] = '"';
		name_input[++length] = '\0';

		/* within the source code */
		if ( !system(name_input) )
			puts("system() successfull");
		else
			puts("system() error");
	}
	else 
	{
		puts("Buffer overflow");

		return 1;
	}

	return 0;
}