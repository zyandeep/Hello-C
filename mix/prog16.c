/*
 * According to the Gregorian calendar, it was Monday on the
 * date 01/01/1900. If any year is input through the keyboard
 * write a program to find out what is the day on 1 st January of
 * this year.
 */

 #include <stdio.h>

 int main()
 {
 	int ref_year = 1990, user_year = 0;
 	int total_years = 0, total_lp_years = 0, total_nlp_years = 0;
 	int total_days = 0, mod = 0;

 	puts("Enter the year -->");
 	scanf("%d", &user_year);

 	total_years = user_year - ref_year;
 	total_lp_years = total_years / 4;
 	total_nlp_years = total_years - total_lp_years;
 	total_days = total_nlp_years * 365 + total_lp_years * 366;
 	mod = total_days % 7;

 	/*if (mod == 0)
 	{
 		puts("the 1st January is Monday");
 	}
 	else if (mod == 1)
 	{
 		puts("the 1st January is Tuesday");

 	}
 	else if (mod == 2)
 	{
 		puts("the 1st January is Wednesday");

 	}
 	else if (mod == 3)
 	{
 		puts("the 1st January is Thursday");

 	}
 	else if (mod == 4)
 	{
 		puts("the 1st January is Friay");

 	}
 	else if (mod == 5)
 	{
 		puts("the 1st January is Saturday");

 	}
 	else if (mod == 6)
 	{
 		puts("the 1st January is Sunday");

 	}*/

 	switch (mod)
 	{
 		case 0:
 			puts("the 1st January is Monday");
 			break;
 		case 1:
 			puts("the 1st January is Tuesday");
 			break;
 		case 2:
 			puts("the 1st January is Wednesday");
 			break;
 		case 3:
 			puts("the 1st January is Thursday");
 			break;
 		case 4:
 			puts("the 1st January is Friay");
 			break;
 		case 5:
 			puts("the 1st January is Saturday");
 			break;
 		case 6:
 			puts("the 1st January is Sunday");
 	
 	}

 	return 0;
 }