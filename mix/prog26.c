/*
* A library charges a fine for every book returned late. For first
* 5 days the fine is 50 paise, for 6-10 days fine is one rupee and
* above 10 days fine is 5 rupees. If you return the book after 30
* days your membership will be cancelled. Write a program to
* accept the number of days the member is late to return the
* book and display the fine or the appropriate message.
*/

#include <stdio.h>

int main(void)
{
	int days_late = 0;
	
	puts("Enter the number of late days -->");
	scanf("%i", &days_late);

	if (days_late <= 5)
	{
		puts("fine is 50 paise");
	}
	else if (days_late >= 6 && days_late <= 10)
	{
		puts("fine is Rs. 1");
	}
	else if (days_late > 10 && days_late <= 30)
	{
		puts("fine is Rs. 5");
	}
	else 
	{
		puts("your membership will be cancelled");
	}

	return 0;
}