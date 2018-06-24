#include <stdio.h>

void paser_year (char *start, int count, char *array);
void paser_month (char *start, int count, char *array);
void paser_day (char *start, int count, char *array);


int main()
{
	char my_date[] = "20150717";
	char year[] = "YYYY";
	char month[] = "MM";
	char day[] = "DD";

	paser_year (my_date, 4, year);
	paser_month (my_date + 4, 2, month);
	paser_day (my_date + 6, 2, day);

	puts(" ");

	printf("parsing year --> %s\n", year);
	printf("parsing month --> %s\n", month);
	printf("parsing day --> %s\n", day);

	return 0;
}


void paser_year (char *start, int count, char *array)
{
	int i = 0;

	for (; i < count; i++)
	{
		*(array + i) = *(start + i);
	}

	return;
}


void paser_month (char *start, int count, char *array)
{
	int i = 0;

	for (; i < count; i++)
	{
		*(array + i) = *(start + i);
	}

	return;
}


void paser_day (char *start, int count, char *array)
{
	int i = 0;

	for (; i < count; i++)
	{
		array[i] = *(start + i);
	}

	return;
		
}
