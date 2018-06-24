/*
	Linked-list using recursive struct

	date: 03-09-2014
*/

#include <stdio.h>

typedef struct iland
{
	const char *name;
	const char *open;
	const char *close;

	struct iland *next;	
} iland;


void display(iland *);


int main(void)
{
	iland amity = {"Amity", "9:00", "17:00", NULL};
	iland craggy = {"Craggy", "9:00", "17:00", NULL};
	iland isla_nublar = {"Isla Nublar", "9:00", "17:00", NULL};
	iland shutter = {"Shutter", "9:00", "17:00", NULL};
	iland skull = {"Skull", "9:00", "17:00", NULL};

	// linking struct togather
	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;

	puts("before insertion...");
	display(&amity);

	// inserting a node
	skull.next = isla_nublar.next;
	isla_nublar.next = &skull;

	puts("after insertion...");
	display(&amity);

	return 0;
}


void display(iland *start)
{
	while (start != NULL)
	{
		printf("Name --> %s, Open --> %s-%s\n", (*start).name, start->open, start->close);
		start = start->next;
	}
}
