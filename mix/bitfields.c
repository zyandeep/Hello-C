/*
	Use of bitfields

	date: 31-08-2014
*/

#include <stdio.h>

typedef struct
{
	unsigned int first_visit : 1;
	unsigned int come_again : 1;
	unsigned int finger_lost : 4;
	unsigned int shark_attack : 1;
	unsigned int daya_a_week : 3;

} survey;


void display_result(survey);


int main(void)
{
	survey s = {
		.first_visit = 1,
		.come_again = 1,
		.finger_lost = 3,
		.shark_attack = 0,
		.daya_a_week = 2
	};

	display_result(s);

	return 0;
}


void display_result(survey s)
{
	puts("Survey result...");

	if (s.first_visit)
		puts("It's first visit");
	else
		puts("It's not first visit");

	if (s.come_again)
		puts("The person will come again");
	else
		puts("The person won't come again");

	printf("No of lost finger: %u\n", s.finger_lost);

	if (s.shark_attack)
		puts("Shark-attack happned");
	else
		puts("Shark-attack didn't happne");

	printf("Days of a week he would like to visit: %u\n", s.daya_a_week);
}