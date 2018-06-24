// C language's horrible keyword -- goto

#include <stdio.h>

int main(void)
{
	char a1, a2, a3, a4, a5;

	for (a1 = 'A'; a1 <= 'Z'; a1++)
	{
		for (a2 = 'A'; a2 <= 'Z'; a2++)
		{
			for (a3 = 'A'; a3 <= 'Z'; a3++)
			{
				for (a4 = 'A'; a4 <= 'Z'; a4++)
				{
					for (a5 = 'A'; a5 <= 'Z'; a5++)
					{
						if (a1 == 'A' && a2 == 'B' && a3 == 'C' && a4 == 'Y' && a5 == 'Z')
						{
							goto OUTSIDE;
						}

						printf("%c%c%c%c%c ", a1, a2, a3, a4, a5);		
					}
				}
			}
		}	
	}

	OUTSIDE:
	puts("\n\n Al last out of those freaking nested loops!!");
	
	return 0;
} 