// why we need structute in C

#include <stdio.h>

#define LINE_LENGHT 65
#define ROW 6

int main(void)
{
	char actors[ROW][30] = {
		"Judy Garlend",
		"Ray Bolger",
		"Bert Lahr",
		"Jack Haley",
		"Margaret Hamilton",
		"Frank Morgan"
	};

	int age[ROW] = {17, 35, 44, 40, 37, 49};

	char roles[ROW][30] = {
		"Dorothy",
		"Scarecrow",
		"Cowardly Lion",
		"Tin Woodsman",
		"Wicked Witch",
		"The Wizard"
	};

	int i;

	puts("Wizard of Oz Database!\n");

	printf("%-20s\t\t%3s\t\t%-20s\n", "Actor", "Age", "Role");
	for (i = 1; i <= LINE_LENGHT; i++) 
	{
		putchar('-');
	}

	// printing the database
	for (i = 0; i < ROW; i++) 
	{
		printf("\n%-20s\t\t%3d\t\t%-20s", actors[i], age[i], roles[i]);
	}
	putchar('\n');
	
	return 0;
}