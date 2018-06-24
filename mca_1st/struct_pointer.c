#include <stdio.h>

int main(void)
{
	struct book 
	{
		char name[30];
		char author[30];
		int pages;
		float price;	
	};

	struct book b = {
		"Memories of Midnight",
		"Sidney Sheldon",
		380,
		300.50
	};
	struct book *ptr = &b;

	puts("Using struct variable...");
	printf("%s %s %d %.2f\n", b.name, b.author, b.pages, b.price);
	puts("Using struct pointer...");
	printf("%s %s %d %.2f\n", ptr->name, ptr->author, ptr->pages, ptr->price);

	return 0;
}