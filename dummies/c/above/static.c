/* typedef with structure */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flush_input(void);
void request(void);


int main(void)
{
	char ans;

	while (1)
	{
		puts("\nMENU\n=========");
		printf("Press 1 enter new request, Q to quit: ");
		ans = getchar();

		flush_input();

		switch (ans)
		{
			case '1':
				request();
				break;

			case 'q':
			case 'Q':
				puts("Quiting now...");
				exit(EXIT_SUCCESS);

			default:
				puts("Naughty input!"); 
		}
	} 

	return 0;
}


void request(void)
{
	// static char input[70] = " ";
	static int amount;

	puts("\nNew Request!");
	printf("\tPrevious request was: \"%i\" amount\n", amount);
	printf("Enter new supply amount: ");
	scanf("%d", &amount);

	puts("Thanks!");
}

void flush_input(void)
{
	while (fgetc(stdin) != '\n')
		;
}