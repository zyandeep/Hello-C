#include <stdio.h>
#include <string.h>
#define NAME 30
#define ADDRESS 50

struct employee
{
	int employee_no;
	char employee_name[NAME];
	char employee_address[ADDRESS];
	float salary;	
};

void enter_data(struct employee records[], int size);
float find_salary(struct employee records[], int size, char name[]);
void clear_input_buffer();

int main(void)
{
	struct employee records[4];
	char emp_name[NAME];

	enter_data(records, 4);

	clear_input_buffer();
	printf("\nEnter the name of the employee: ");
	fgets(emp_name, NAME, stdin);

	printf("His salary = %.2f\n", find_salary(records, 4, emp_name));

	return 0;
}

void clear_input_buffer()
{
	while( getchar() != '\n' );
}

void enter_data(struct employee records[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("\nRecord no. %d", i+1);
		printf("\nEmployee no: ");
		scanf("%d", &records[i].employee_no);

		clear_input_buffer();

		printf("Employee name: ");
		fgets(records[i].employee_name, NAME, stdin);

		records[i].employee_name[ strlen(records[i].employee_name) ] = '\0';

		printf("Employee address: ");
		fgets(records[i].employee_address, ADDRESS, stdin);
		printf("Employee salary: ");
		scanf("%f", &records[i].salary);
	}
}

float find_salary(struct employee records[], int size, char name[])
{
	int i;

	for (i = 0; i < size; i++)
	{
		if( strcmp(records[i].employee_name, name) == 0 )
			return records[i].salary;
	}
}