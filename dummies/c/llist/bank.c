/* Writing/reading struct to disk */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>

#define FALSE 0
#define TRUE 1

struct account 
{
	int number;
	char firstname[30];
	char lastname[30];
	float balance;

	struct account *next;
};
struct account *first_ac = NULL;
struct account *current_ac = NULL;
struct account *new_ac = NULL;

int acc_num = 0;		/* this automatically gives ac. no. to new accounts */

void flush_input(void);
void add_new_account(void);
void list_all_accounts(void);
void delete_account(void);
void modify_account(void);
void print_a_record(struct account *acc_ptr);
void save_records(const char *filename);
void read_records(const char *filename);
void prompt(void);


int main(int argc, const char *argv[])
{
	char user_choice;
	int done = FALSE;

	/* check for the filename argument */
	if (argc != 2)
	{
		prompt();
		return EXIT_FAILURE;
	}
	
	/* initialize database */
	read_records( argv[1] );

	/* display the menu */
	do
	{
		/* clear the screen */
		system("clear");

		puts("\nManage Bank Account\n");
		puts("A - Add a new account");
		puts("D - Delete an account");
		puts("L - List all the accounts");
		puts("M - Modify an account");
		puts("Q - Quit this program");
		printf("\nYour choice --> ");
		user_choice = toupper( getchar() );

		flush_input();			/* clear the stdin */

		switch (user_choice)
		{
			case 'A':
				puts("\nAdd new account");
				puts("****************************");
				add_new_account();
				break;

			case 'L':
				puts("\nList all the accounts");
				puts("****************************");
				list_all_accounts();
				break;

			case 'D':
				puts("\nDelete an account");
				puts("****************************");
				delete_account();
				break;

			case 'M':
				puts("\nModify an account");
				puts("****************************");
				modify_account();
				break;

			case 'Q':
				done = TRUE;
				puts("\nQuitting...\n");
				save_records( argv[1] );
				break;
			
			default:
				puts("\nWHAT?");
				printf("Press any key to continue...");
				getchar();
		}

	} while ( !done );

	return EXIT_SUCCESS;
}


/* eat all the chars in stdin untill '\n' */
void flush_input(void)
{
	while ( getc(stdin) != '\n' )
		;
}


void add_new_account(void)
{
	/* create a new account */
	new_ac = (struct account *) malloc( sizeof(struct account) );
	new_ac->next = NULL;

													/* check if it is the first record */
	if ( first_ac == NULL ) {
		first_ac = current_ac = new_ac;
	}
	else											/* link the record with the list */
	{
		current_ac->next = new_ac;
		current_ac = new_ac;
	}
	

	/* get the user inputs */
	/* get the account number */

	acc_num++;
	printf("Account Number: %i\n", acc_num);
	current_ac->number = acc_num;

	printf("Enter customer’s last name: ");
	fgets(current_ac->lastname, 30, stdin);

	printf("Enter customer’s first name: ");
	fgets(current_ac->firstname, 30, stdin);

	printf("Enter account balance: $");
	scanf("%f", &current_ac->balance);

	flush_input();

	printf("Account #%d has been created successfully\n", current_ac->number);

	printf("\nPress any key to continue...");
	getchar();
}

void list_all_accounts(void)
{
	int ac_counter;
	struct account *travers;

	if (first_ac == NULL)
	{
		puts("There are no records to display");
	}	
	else
	{
		/* rewind the list */
		travers = first_ac;
		ac_counter = 1;

		/* Display the list */
		while (travers)
		{
			printf("\n#%d Account = %i:\n", ac_counter++, travers->number);
			printf("Last name: %s", travers->lastname);
			printf("First name: %s", travers->firstname);
			printf("Account balance = $%.2f\n", travers->balance);

			/* go to the next record */
			travers = travers->next;
		}
	}	
	
	printf("\nPress any key to continue...");
	getchar();
}

void delete_account(void)
{
	int ac_no;
	struct account *travers = first_ac;
	struct account *prev = NULL;

	if (first_ac == NULL)
	{
		puts("There are no records to delete");
	}
	else
	{
		list_all_accounts();		/* show all records first */
		printf("Enter account number to delete: ");
		scanf("%i", &ac_no);

		flush_input();

		/* scan the list */
		while (travers)
		{
			if (travers->number == ac_no) {
				if (prev == NULL)
				{
					first_ac = travers->next;			/* it's the first record */
				}
				else
				{
					/* it it's the last account then upadte current_ac */
					if (travers->next == NULL)
						current_ac = prev;

					prev->next = travers->next;
				}
				free(travers);
				printf("Account #%d has been deleted successfully\n", ac_no);
				break;
			}
			prev = travers;
			travers = travers->next;
		}

		if (travers == NULL)
		{
			printf("No records found for account #%d\n", ac_no);
			puts("Nothing deleted.");
		}
	}

	printf("\nPress any key to continue...");
	getchar();
}


void modify_account(void)
{
	int ac_no;
	struct account *travers = first_ac;
	
	if (first_ac == NULL)
	{
		puts("There are no records to modify");
	}
	else
	{
		printf("Enter account number to modify: ");
		scanf("%i", &ac_no);

		flush_input();

		/* scan the list */
		while (travers)
		{
			if (travers->number == ac_no) 
			{
				/* display the record first */
				puts("Record found!");
				print_a_record(travers);

				printf("Enter customer’s last name: ");
				fgets(travers->lastname, 30, stdin);

				printf("Enter customer’s first name: ");
				fgets(travers->firstname, 30, stdin);

				printf("Enter account balance: $");
				scanf("%f", &travers->balance);

				flush_input();

				printf("Account #%d has been modified successfully", ac_no);
				break;
			}
			travers = travers->next;
		}

		if (travers == NULL)
		{
			printf("No records found for account #%d\n", ac_no);
			puts("Nothing modified.");
		}
	}

	printf("\nPress any key to continue...");
	getchar();
}


void print_a_record(struct account *acc_ptr)
{
	if (acc_ptr == NULL)
	{
		puts("Don't give me garbage to print");
	}
	else
	{
		printf("\nAccount = %i:\n", acc_ptr->number);
		printf("Last name: %s", acc_ptr->lastname);
		printf("First name: %s", acc_ptr->firstname);
		printf("Account balance = $%.2f\n", acc_ptr->balance);
	}

	putchar('\n');
}


void save_records(const char *filename)
{
	FILE *pfile;

	/* check if the list is empty */
	if (first_ac == NULL)
		return;

	pfile = fopen(filename, "w");

	if (pfile == NULL)
	{
		printf("Error writing to %s\n", filename);
		perror("fopen()");
		exit(EXIT_FAILURE);
	}

	/*traverse the list end save each record to disk */
	while (first_ac)
	{
		fwrite(first_ac, sizeof(struct account), 1, pfile);
		first_ac = first_ac->next;
	}

	fclose(pfile);
	puts("Records have been written to disk successfuly");
}


void read_records(const char *filename)
{
	FILE *pfile = NULL;
	struct account *temp_ptr;
	long int bytes;

	pfile = fopen(filename, "r");

	if (pfile == NULL)
	{
		printf("Error writing to %s\n", filename);
		perror("fopen()");
		exit(EXIT_FAILURE);
	}

	/* read all the records off of the file */
	while (1)
	{
		/* allocate memory for every record */
		temp_ptr = (struct account *) malloc( sizeof(struct account) );

		bytes = fread(temp_ptr, sizeof(struct account), 1, pfile);
		if (bytes == 0) {
			break;
		}

		temp_ptr->next = NULL;
		if ( temp_ptr->number > acc_num ) {
			acc_num = temp_ptr->number;				/* get the last higest assigned acc no */
		}

		if (first_ac == NULL) {
			first_ac = current_ac = temp_ptr;
		}
		else {
			current_ac->next = temp_ptr;
			current_ac = temp_ptr;
		}
	}

	fclose(pfile);
	
	puts("Records have been initialized successfuly");
	puts("Press any key to start the program...");
	getchar();
}


void prompt(void)
{
	puts("Database name argument is missing");
	puts("Try ./bank_ac <database_name>");
}
