/* 
	Nesting of structure
	
	Author: Zyandeep 
	Date: 12-10-2015 
*/

#include <stdio.h>
#include <string.h>

struct date
{
	int day;
	int month;
	int year;
};

struct family
{
	char name[30];
	struct date dob;
};


int main(void)
{
	struct family me, mom;

	/* My data */
	strcpy(me.name, "Zyandeep Baruah");
	me.dob.day = 27;
	me.dob.month = 07;
	me.dob.year = 1993;

	/* Mom's data */
	strcpy(mom.name, "Nira Moni Baruah");
	mom.dob.day = 12;
	mom.dob.month = 10;
	mom.dob.year = 1962;

	puts("My data...");
	printf("%9s : %s\n", "Name", me.name);
	printf("%9s : %d/%d/%d\n", "Birthday", me.dob.day, me.dob.month, me.dob.year);

	puts("\nMom's data...");
	printf("%9s : %s\n", "Name", mom.name);
	printf("%9s : %d/%d/%d\n", "Birthday", mom.dob.day, mom.dob.month, mom.dob.year);

	return 0;
}