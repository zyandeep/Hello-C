/* annonymus user-defined data types */

#include <stdio.h>
#include <stdlib.h>

/* annonymus structure */
struct
{
	char letter;
	int number;
} st;

/* annonymus union */
union
{
	char letter;
	int number;
} un;

/* annonymus enum */
enum 
{
	PHYSICS, COMPUTER_SCIENCE, MATHS
} en; 


int main(void)
{
	st.letter = 'Z';
	st.number = 15;

	un.letter = 'b';
	un.number = 72;

	en = COMPUTER_SCIENCE;

	printf("st.letter: %c\n", st.letter);
	printf("st.number: %d\n", st.number);

	printf("un.letter: %c\n", un.letter);
	printf("un.number: %d\n", un.number);

	printf("enum en: %d\n", en);

	return EXIT_SUCCESS;
}