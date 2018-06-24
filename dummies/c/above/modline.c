/* Global vs Local variable */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void showline(void);
void dashes(char);
void shout(void);

char line[80];
int linelen = 0;


int main(void)
{
	puts("Enter a line of text --- ");
	fgets(line, 80, stdin);

	linelen = strlen(line);

	puts("Here is the line you entered...");
	showline();
	
	return 0;
}

/* prints a dashed line */
void dashes(char c)
{
	int i;

	// "early leaving" with return
	if (c == ' ')
	{
		putchar('\n');
		puts("[early leaving with return]");
		return;
	}

	for (i = 1; i <= linelen; i++)
		putchar(c);

	putchar('\n');
}

/* make shouting */
void shout()
{
	int i = 0;

	while (line[i])
	{
		line[i] = toupper(line[i]);
		i++;
	}

	puts(line); 
}

/* display the input line */
void showline()
{
	dashes(' ');
	puts(line);
	shout();
	dashes('*');
}