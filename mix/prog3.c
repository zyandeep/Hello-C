/* Program no : 2
 * 
 * If the marks obtained by a student in five different subjects are input through 
 * the keyboard, find out the aggregate marks and percentage marks obtained 
 * by the student. Assume that the maximum marks that can be obtained by a student 
 * in each subject is 100.
 */

#include <stdio.h>
#define SIZE 5

int main()
{
	int marks[SIZE];
	int agg_marks = 0, i;
	float percentage = 0.0;

	puts("Enter marks of five subjects -->");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", (marks + i)); 
	}
	
	// calculation
	for (i = 0; i < 5; i++)
	{
		agg_marks += *(marks + i); 
	}

	percentage = (agg_marks * 100) / 500;

	printf("Aggregate marks = %d\n", agg_marks);
	printf("Percentage = %.2f\n", percentage);
	
	return 0;
}

