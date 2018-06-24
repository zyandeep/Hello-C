/*
	
	date: 06-09-2015
*/

#include <stdio.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE, BREAK_UP, LAW_SUIT};

typedef struct 
{
	char *name;
	enum response_type type;
} response;


void dump(response r);
void marriage(response r);
void second_chance(response r);
void break_up(response r);
void law_suit(response r);


int main(void)
{
	response r[] = {
		{"Mike", DUMP}, {"Luis", SECOND_CHANCE}, {"Matt", LAW_SUIT}, 
		{"William", MARRIAGE}, {"John", MARRIAGE}, {"William", BREAK_UP}
	};

	// array of function pointers
	void (*replise[]) (response r) = {&dump, second_chance, marriage, break_up, law_suit};

	int i;

	for (i = 0; i < 6; i++)
	{
		(replise[r[i].type]) (r[i]);
	}

	return 0;
}


void dump(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Unfortunately your last date contacted us to");
	puts("say that they will not be seeing you again");
}

void second_chance(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Good news: your last date has asked us to");
	puts("arrange another meeting. Please call ASAP.");
}

void marriage(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Congratulations! Your last date has contacted");
	puts("us with a proposal of marriage.");
}

void break_up(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Unfortunately your last date contacted us to");
	puts("and wants a break up with you");
}

void law_suit(response r)
{
	printf("Dear %s,\n", r.name);
	puts("Unfortunately your last date contacted us to");
	puts("and wants to talk to lawyer about the marriage status");
}