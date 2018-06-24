#include <stdio.h>

// void peasoup(int green);
void peasoup(int *green);

int main(void)
{
	int turn;
	int *head = &turn;

	turn = 5;
	peasoup(&turn);    	// peasoup(head);

	return 0;
}

void peasoup(int *green)
{
	while ( (*green)-- )
	{
		puts("Bleach!");
	}
}