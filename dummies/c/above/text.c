// count the letters, digits and spaces in a sentence

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 150

int main(void)
{
	char text[SIZE];
	char c;
	int letter, digit, space, i;

	i = letter = digit = space = 0;

	puts("Enter a line of text -- ");
	fgets(text, SIZE, stdin);

	// remove the appended '\n'
	text[strchr(text, '\n') - text] = '\0';

	while ( c = text[i++] )
	{
		if ( isalpha(c) )
			letter++;
		else if ( isdigit(c) )
			digit++;
		else if ( isblank(c) )
			space++;
	}

	printf("The sentence has %d letters, %d digits, %d spaces\n", letter, digit, space);
	
	return 0;
} 