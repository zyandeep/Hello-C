#include <stdio.h>

int main (void)
{
	int age = 0;
	char s = ' ';

	puts ("enter your sex and age -->");
	scanf ("%c%d", &s, &age);

	// logical NOT !
	if (!age != 0)
	{
		puts ("Enter a valid age");

	}
	else 
	{
		// logical 'AND' && ,  logical 'OR' ||
		if (age >= 18 && (s == 'm' || s == 'M' ))
		{
			puts("you can enter");
		}
		else 
		{
			puts("you are not allowed");
		}
	
	}

	return 0;
}