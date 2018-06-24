// why we need structute in C

#include <stdio.h>
#include <string.h>

#define LINE_LENGHT 65
#define SIZE 6

struct oz
{
	char actor[30];
	int age;
	char role[30]; 
};

void sort_name(struct oz[]);
void sort_age(struct oz[]);


int main(void)
{
	struct oz cast[SIZE] = {
		{"Judy Garlend", 17, "Dorothy"},
		{"Ray Bolger", 35, "ScarecSIZE"},
		{"Bert Lahr", 44, "Cowardly Lion"},
		{"Jack Haley", 40, "Tin Woodsman"},
		{"Margaret Hamilton", 37, "Wicked Witch"},
		{"Frank Morgan", 49, "The Wizard"}
	};

	int i;

	puts("Wizard of Oz Database!\n");

	puts("Unsorted database...");
	printf("%-20s\t\t%3s\t\t%-20s\n", "Actor", "Age", "Role");
	for (i = 1; i <= LINE_LENGHT; i++) 
	{
		putchar('-');
	}

	for (i = 0; i < SIZE; i++) 
	{
		printf("\n%-20s\t\t%3d\t\t%-20s", 
			cast[i].actor, 
			cast[i].age,
			cast[i].role);
	}

	sort_age(cast);

	puts("\n\n\tSorted database by Age...");
	printf("%-20s\t\t%3s\t\t%-20s\n", "Actor", "Age", "Role");
	for (i = 1; i <= LINE_LENGHT; i++) 
	{
		putchar('-');
	}

	for (i = 0; i < SIZE; i++) 
	{
		printf("\n%-20s\t\t%3d\t\t%-20s", 
			cast[i].actor, 
			cast[i].age,
			cast[i].role);
	}

	sort_name(cast);

	puts("\n\n\tSorted database by Name...");
	printf("%-20s\t\t%3s\t\t%-20s\n", "Actor", "Age", "Role");
	for (i = 1; i <= LINE_LENGHT; i++) 
	{
		putchar('-');
	}

	for (i = 0; i < SIZE; i++) 
	{
		printf("\n%-20s\t\t%3d\t\t%-20s", 
			cast[i].actor, 
			cast[i].age,
			cast[i].role);
	}
	
	putchar('\n');
	
	return 0;
}

void sort_age(struct oz arr[])
{
	struct oz temp;
	int i, j, pass = SIZE - 1;

	for (i = 0; i < pass; i++)
	{
		for (j = i + 1; j <= pass; j++)
		{
			if (arr[i].age > arr[j].age)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void sort_name(struct oz arr[])
{
	struct oz temp;
	int i, j, pass = SIZE - 1;

	for (i = 0; i < pass; i++)
	{
		for (j = i + 1; j <= pass; j++)
		{
			if ( strcasecmp(arr[i].actor, arr[j].actor) > 0 )
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
}