#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RECORDS 6

struct jb
{
	char actor[30];
	struct jb *next;	
};


int main(void)
{
	char *names[RECORDS] = {
		"Sean Connery",
		"David Niven",
		"George Lazenby",
		"Roger Moore",
		"Timothy Dalton",
		"Pierce Brosnan"
	};
	struct jb *head = NULL;         /* list is empty */
	struct jb *new_item = NULL;
	struct jb *current_item = NULL;
	int i;

	/* create the list of 6 records */
	for (i = 0; i < RECORDS; ++i)
	{
		/* create a new record */
		new_item = (struct jb *) malloc( sizeof(struct jb) );
		strcpy( new_item->actor, names[i]);
		new_item->next = NULL;

		/* if 'head' is NULL initialize it */
		if ( head == NULL )
			head = new_item;

		/* link it with its prev record */
		if (current_item)
			current_item->next = new_item;

		/* make the new record as the current record */
		current_item = new_item;			
	}

	/* rewind the list */
	current_item = head;
	i = 1;

	/* Display the list */
	while (current_item)
	{
		printf("#%d structure at address = %p: \n", i++, current_item);
		printf("\tactor name = %s\n", current_item->actor);
		printf("\tnext structure address = %p\n", current_item->next);

		/* go to the next record */
		current_item = current_item->next;
	}
	
	return 0;
}