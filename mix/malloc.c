/*
	dynamic memory and strdup()

	date: 03-09-2014
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct iland
{
	const char *name;
	const char *open;
	const char *close;

	struct iland *next;	
} iland;


// start/head of the linked-list
iland *head = NULL;


iland* create(char *);
void display(iland *);
void release(iland *);


int main(void)
{
	char name[80];
	iland *prev = NULL, *cur = NULL;

	while (fgets(name, 80, stdin) != NULL)
	{
		cur = create(name);

		// set the start of the list
		if (head == NULL)
			head = cur;

		// link the two iland togather
		if (prev != NULL)
			prev->next = cur;

		prev = cur;
	}

	display(head);
	release(head);
	
	return 0;
}


void display(iland *start)
{
	while (start != NULL)
	{
		printf("Name --> %s Open --> %s-%s\n", (*start).name, start->open, start->close);
		start = start->next;
	}
}


iland* create(char *name)
{
	iland *ptr = (iland*) malloc(sizeof(iland));

	ptr->name = strdup(name);
	ptr->open = "9:00";
	ptr->close = "17:00";
	ptr->next = NULL;

	return ptr;
}


void release(iland *start)
{
	iland *next;

	while (start != NULL)
	{
		next = start->next;

		free((void*) start->name);
		free(start);

		start = next;
	}
}