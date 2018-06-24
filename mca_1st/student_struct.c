// studend structure with name, roll number and total
#include <stdio.h>

struct student
{
	char name[30];
	int roll_no;
	int total;
};

int main(void)
{
	struct student s;
	
	printf("Enter student's name: ");
	gets(s.name);
	printf("Enter roll number: ");
	scanf("%d", &s.roll_no);
	printf("Enter total marks: ");
	scanf("%d", &s.total);

	printf("Student information...\n");
	printf("Name: %s\n", s.name);
	printf("Roll number: %d\n", s.roll_no);
	printf("Total marks: %d\n", s.total);

	return 0;
}