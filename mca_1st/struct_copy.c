#include <stdio.h>
#include <string.h>

int main(void)
{
	struct book
	{
		char title[50];
		char author[50];
		int pages;
		float price;
	} b1;


	// initialisation of a structure variable
	struct book b2 = {
		"If Tomorrow Comes",
		"Sidney Sheldon",
		420,
		447.50
	};

	// the easiest way would be...
	// b1 = b2; But...
	strcpy(b1.title, b2.title);
	strcpy(b1.author, b2.author);
	b1.pages = b2.pages;
	b1.price = b2.price;

	printf("b1.title = %s\n", b1.title);
	printf("b1.author = %s\n", b1.author);
	printf("b1.pages = %d\n", b1.pages);
	printf("b1.price = %.2f\n", b1.price);

	return 0;
}
