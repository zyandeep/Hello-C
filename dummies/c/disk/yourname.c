#include <stdio.h>
#include <stdlib.h>
#include "../../../includes/myheader.h"

int main(void)
{
	char name[30], home_town[50];
	short int age;
	FILE *myfile;
	
	myfile = fopen("../yourname.txt", "w");

	if (!myfile)
	{
		puts("Error in opening file");
		return EXIT_FAILURE;
	}

	printf("Enter your name --> ");
	fgets(name, 30, stdin);
	
	printf("Enter your age --> ");
	scanf("%hi", &age);

	flush_input();

	printf("Enter your home town --> ");
	fgets(home_town, 50, stdin);
	
	puts("Writing information to disk...");

	fprintf(myfile, "Name : %s", name);
	fprintf(myfile, "Age : %hi\n", age);
	fprintf(myfile, "Home town : %s", home_town);
	fprintf(myfile, "Salary: %.2f\n", 1500.50f);

	fclose(myfile);

	return EXIT_SUCCESS;
}
