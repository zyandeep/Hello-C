// switch-case structure in C

#include <stdio.h>

int main(void)
{
	char c;

	puts("Competing political parties: ");
	puts("C - National(I) Congress");
	puts("B - B.J.P");
	puts("A - A.G.P");
	puts("M - Aam Aadmi Party");
	puts("P - C.P.I.E.M");
	printf("Choose your affiliation: ");
	c = getchar();

	switch (c) 
	{
		case 'A':
		case 'a':
			puts("You vote for AJP");
			break;
		
		case 'B':
		case 'b':
			puts("You vote for BJP");
			break;

		case 'C':
		case 'c':
			puts("You vote for I Congress");
			break;

		case 'M':
		case 'm':
			puts("You vote for Aam Aadmi Party");
			break;

		case 'P':
		case 'p':
			puts("You vote for CPIEM");
			break;	
			
		default:
			puts("Choose your affiliation wisely!");
	} 


	return 0;
}