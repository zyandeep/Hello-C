/* Program no : 1
 * 
 * Ramesh’s basic salary is input through the keyboard. His 
 * dearness allowance is 40% of basic salary, and house rent
 * allowance is 20% of basic salary. Write a program to calculate
 * his gross salary.
 */

#include <stdio.h>

int main()
{
	float basic_sal, dr_allowence, hs_allownce, gr_salary;
	
	basic_sal = dr_allowence = hs_allownce = gr_salary = 0.0;
	
	puts("Enter Ramesh's basic salary -->");
	scanf("%f", &basic_sal);
	
	dr_allowence = (basic_sal * 40) / 100;
	hs_allownce = (basic_sal * 20) / 100;
	gr_salary = basic_sal + dr_allowence + hs_allownce;
	
	printf("Ramesh's gross salary = %.2f\n", gr_salary);
	
	return 0;
}

