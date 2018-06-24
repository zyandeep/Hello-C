/* Writing/reading struct to disk */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../../../includes/myheader.h"

#define FALSE 0
#define TRUE 1

void write_a_stock(void);
void read_stocks(void);
void modify_a_stock(void);

typedef struct 
{
	char name[30];
	float buy_price;
	float current_price;
}stock_data;


int main(void)
{
	char user_choice;
	short int done = FALSE;

	while (!done)
	{
		/* clear the screen */
		system("clear");

		puts("\nStock Portfolio Thing\n");
		puts("A - Add new stock");
		puts("L - List stocks");
		puts("M - Modify stock info.");
		puts("Q - Quit");
		printf("Youe choice --> ");
		user_choice = toupper(getchar());

		flush_input();

		switch (user_choice)
		{
			case 'A':
				puts("Add new stock\n");
				write_a_stock();
				break;

			case 'L':
				puts("List stocks\n");
				read_stocks();
				break;

			case 'M':
				puts("Modify stock info\n");
				modify_a_stock();
				break;

			case 'Q':
				puts("Quit\n");
				done = TRUE;
				break;
			
			default:
				puts("WHAT?\n");
				getchar();
		}

	}

	return 0;
}


void write_a_stock(void)
{
	FILE *pstock;
	stock_data s;

	pstock = fopen("stock.dat", "a");

	if (!pstock)
	{
		puts("Error opening file \"stock.dat\"");
		exit (EXIT_FAILURE);
	}

	printf("Enter stock name --> ");
	fgets(s.name, 30, stdin);

	printf("How much did you pay for it? --> $");
	scanf("%f", &s.buy_price);
	s.current_price = s.buy_price;

	flush_input();

	/* write the stock to disk */
	fwrite(&s, sizeof(s), 1, pstock);
	fclose(pstock);
	puts("Stock added!");

	getchar();
}

void read_stocks(void)
{
	FILE *pstock;
	stock_data s;
	int b;

	pstock = fopen("stock.dat", "r");

	if (!pstock)
	{
		puts("Error opening file \"stock.dat\"");
		exit (EXIT_FAILURE);
	}

	/* read stocks off of disk */
	while (TRUE) 
	{
		b = fread(&s, sizeof(s), 1, pstock);

		if(b == FALSE)
			break;

		printf("\nStock name: %s", s.name);
		printf("Purchased for: $%.2f\n", s.buy_price);
		printf("Current price: $%.2f\n", s.current_price);
	}

	fclose(pstock);

	getchar();
}

void modify_a_stock(void)
{
	FILE *pstock;
	stock_data s;
	short int rec_no;
	char new_name[30];
	long int offset;
	
	pstock = fopen("stock.dat", "r+");

	if (!pstock)
	{
		puts("Error opening file \"stock.dat\"");
		exit (EXIT_FAILURE);
	}

	printf("Which record number do you want to find? ");
	scanf("%hi", &rec_no);

	flush_input();

	/* find the record */
	if (fseek(pstock, sizeof(s) * (rec_no-1), SEEK_SET))
	{
		printf("Error in finding record %hi", rec_no);
		return;  
	}

	offset = ftell(pstock);

	if (!fread(&s, sizeof(s), 1, pstock))
	{
		printf("Error in record %hi", rec_no);
		return;  
	}
	printf("\nRecord no: %hd\n", rec_no);
	printf("\nStock name: %s", s.name);
	printf("Purchased for: $%.2f\n", s.buy_price);
	printf("Current price: $%.2f\n", s.current_price);

	/* get the new info */
	printf("Enter stock name --> ");
	fgets(new_name, 30, stdin);
	printf("How much did you pay for it? --> $");
	scanf("%f", &s.buy_price);
	s.current_price = s.buy_price;
	
	flush_input();
	
	if ( strlen(new_name) > 1  )
	{
		strcpy(s.name, new_name);
	}

	fseek(pstock, offset, SEEK_SET);
	fwrite(&s, sizeof(s), 1, pstock);
	puts("Stock modified!");
	fclose(pstock);

	getchar();
}