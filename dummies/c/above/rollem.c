#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DICE 12

void roll(int total_dice, int result[], int *sum);
void show_result(int total_dice, int result[], int *sum);
void print_dashes(int total_dice);
void print_dices(int total_dice, int *result);
int print_total(int *sum);

int main(void)
{
	int dice;
	int total = 0;
	int result[MAX_DICE];

	puts("R O L L  ' E M");
	printf("How many dices would you like to roll (1 to 12)? ");
	scanf("%d", &dice);
	printf("Rolling %d...\n", dice);
	puts("Here they come!");

	roll(dice, result, &total); 
	show_result(dice, result, &total);

	return 0;
}


void roll(int total_dice, int result[], int *sum)
{
	int i;

	srandom( (unsigned int) time(NULL) );

	for (i = 0; i < total_dice; i++)
	{
		result[i] = (int) (random() % 6 + 1);
		*sum += result[i];
	}

}

void show_result(int total_dice, int result[], int *sum)
{
	int i;

	/* print array index */
	for (i = 1; i <= total_dice; i++)
	{
		if (i < 10)
			printf("  ");
		else
			printf(" ");

		printf("%d", i);

		printf(" ");
	}

	/* print dashes */
	print_dashes(total_dice);

	/* print dice result */
	print_dices(total_dice, result);

	/* print dashes */
	print_dashes(total_dice);

	/* print total */
	printf("\nTotal = %d\n", print_total(sum));
	
}

void print_dashes(int total_dice)
{
	int i;

	putchar('\n');

	for (i = 1; i <= 4 * total_dice; i++)
	{
		if (i % 4 == 1)
			printf("+");
		else
			printf("-");
	}

	putchar('+');

}

void print_dices(int total_dice, int *result)
{
	int i;

	putchar('\n');

	/* print array elements */
	for (i = 0; i < total_dice; i++)
	{
		printf("| ");

		printf("%d", *(result+i));

		printf(" ");
	}

	putchar('|');
}

int print_total(int *sum)
{
	return *sum;
}