 /* Program no : 10
 * 
 * In a town, the percentage of men is 52. The percentage of
 * total literacy is 48. If total percentage of literate men is 35 of
 * the total population, write a program to find the total number
 * of illiterate men and women if the population of the town is
 * 80,000.
 */

 #include <stdio.h>

 int main()
 {
 	int population = 80000, men_p = 52, total_lit_p = 48, total_lit_man_p = 35;
 	int lit_man = 0, lit_woman = 0, total_lit_woman_p = 0, total_man = 0, 
 		total_woman = 0, total_lit_people = 0;

 	// percentage of literate women
 	total_lit_woman_p = total_lit_p - total_lit_man_p;  

 	total_lit_people = population * total_lit_p / 100;
 	total_man = population * men_p / 100;
 	total_woman = population - total_woman;
 	lit_man = population * total_lit_man_p / 100;
 	lit_woman = population * total_lit_woman_p / 100;

 	// or lit_woman = total_lit_people - lit_man;

 	printf("total_lit_people = %d\n", total_lit_people);
 	printf("total_man = %d\n", total_man);
 	printf("total_woman = %d\n", total_woman);
 	printf("total_lit_man = %d\n", lit_man);
 	printf("total_lit_woman = %d\n", lit_woman);

 	return 0;
 }