/* A filter program in ch */
/* rot13 --> Roating an alphabet by 13 plache */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;

	while ((ch = fgetc(stdin)) != EOF)
	{
		if (isalpha(ch))
		{
			if (toupper(ch) <= 'M')
			{
				ch += 13;
			}
			else
			{
				ch -= 13;
			}
		}
		
		fputc(ch, stdout);
	}
	
	return 0;
}