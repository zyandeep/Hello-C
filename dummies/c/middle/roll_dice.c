// a program to stimulate 16 dice rolling

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6
#define ROLLS 10

int comparator(void *a, void *b);


int main(void)
{
	int dice, i, hf, lf, higest_occur, lowest_occur;
	int face[SIZE] = {0, 0, 0, 0, 0, 0};

	// using computer's clock to seed random numbers
	srandom( (unsigned int) time(NULL));

	puts("10 dices are rolling down...");
	for (i = 1; i <= ROLLS; i++)
	{
		dice = ((int) random() % 6) + 1;
		printf("dice[%d]: %d\n", i, dice);

		switch (dice)
		{
			case 1:
				face[0]++;
				break;
			case 2:
				face[1]++;
				break;
			case 3:
				face[2]++;
				break;
			case 4:
				face[3]++;
				break;
			case 5:
				face[4]++;
				break;
			case 6:
				face[5]++;
		}	
	}

	// // sorting the array
	// qsort(face, SIZE, sizeof(int), comparator);

	// searcing for higest and lowest occurence value
	hf = lf = 1;
	higest_occur = lowest_occur = face[0];

	for (i = 1; i < 6; i++)
	{
		if (face[i] > higest_occur)
		{
			higest_occur = face[i];
			hf = i + 1;
		}

		if (face[i] < lowest_occur)
		{
			lowest_occur = face[i];
			lf = i + 1;
		}
	}

	printf("Face %i occured the most: %d times\n", hf, higest_occur);
	printf("Face %i occured the least: %d times\n", lf, lowest_occur);


	return 0;
}


// the comparator function
int comparator(void *a, void *b)
{
	int *ptr_a = (int *) a;
	int *ptr_b = (int *) b;

	return *ptr_a- *ptr_b;
}