/* doubley-linked list */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BALLS 6
#define RANGE 52
#define TOTAL 10

struct lotto
{
	int ball_array[BALLS];

	struct lotto *next;
	struct lotto *prev;
};

struct lotto *first_item;
struct lotto *cur_item;
struct lotto *new_item;

int get_ball(void);
void create_list(void); 
void display_list_forward(void);
void display_list_backward(void);
void delete_record(void);

int main(void)
{
	/* Seed random number */
	srandom( (unsigned int) time(NULL) );

	/* build the list */
	create_list();

	/* show the list forward */
	display_list_forward();

	/* show the list backward */
	display_list_backward();

	/* delete a record */
	delete_record();
	
	return EXIT_SUCCESS;
}


int get_ball(void)
{
	int ball = (int) random() % RANGE + 1;

	return ball;
}


void create_list(void)
{
	int i, j;

	/* Fill the 10 records */
	for (i = 1; i <= TOTAL; ++i) 
	{
		new_item = (struct lotto *) malloc( sizeof(struct lotto) );
		new_item->next = new_item->prev = NULL;

		/* draw 6 random balls */
		for (j = 0; j < BALLS; ++j) {			
			new_item->ball_array[j] = get_ball();
		}

		/* stick it to the list */
		if ( first_item == NULL ) {
			first_item = cur_item = new_item;
		}
		else {
			cur_item->next = new_item;
			new_item->prev = cur_item;
			cur_item = new_item;
		}
	}
}


void display_list_forward(void)
{
	struct lotto *var;
	int i, j;

	puts("Here is the doubley-linked list in forward order: ");

	/* display the list forwad */
	for (var = first_item, i = 1; var != NULL; var = var->next, i++) {
		
		printf("Lotto pick %d: ", i);

		for (j = 0; j < BALLS; j++) {
			printf( "%d ", var->ball_array[j] );
		}

		putchar('\n');
	}
}


void display_list_backward(void)
{
	struct lotto *var;
	int i, j;

	puts("\nHere is the doubley-linked list in backward order: ");

	/* display the list forwad */
	for (var = cur_item, i = 10; var != NULL; var = var->prev, i--) {
		
		printf("Lotto pick %d: ", i);

		for (j = 0; j < BALLS; j++) {
			printf( "%d ", var->ball_array[j] );
		}

		putchar('\n');
	}
}


void delete_record(void)
{
	int rec_no, i;
	struct lotto *var;

	while ( first_item != NULL )
	{
		printf("\nEnter the record number to delete: ");
		scanf("%i", &rec_no);

		for (i = 1, var = first_item; i < rec_no; ++i)
		{
			 var = var->next;
		}

		/* if it's the first record */
		if (var == first_item)
		{
			first_item = var->next;

			if ( first_item != NULL )
			{
				first_item->prev = NULL;
			}
			else
			{
				cur_item = NULL;
			}
		}
		else 
		{
			(var->prev)->next = var->next;

			if ( var->next != NULL )
			{
				(var->next)->prev = var->prev;
			}
			else
			{
				cur_item = var->prev;
			}
		}

		free(var);

		display_list_forward();
	}
}