// count the letters, digits and spaces in a sentence

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 150

int main(void)
{
	char text[SIZE], new[SIZE] = "";
	char c;
	int i = 0, j = 0;;

	puts("Enter a line of text -- ");
	fgets(text, SIZE, stdin);

	// remove the appended '\n'
	text[strchr(text, '\n') - text] = '\0';

	while ( c = text[i++] )
	{
		// copy the char to new string only if it's alpha or digit
		// if ( isalpha(c) || isdigit(c) )

		if ( isalnum(c) )
			new[j++] = toupper(c);
	}

	// add '\0' at the end
	new[j] = '\0';

	printf("Original string: %s\n", text);
	printf("Modified string: %s\n", new);

	return 0;
}