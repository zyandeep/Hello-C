#include <stdio.h>

#define DISTANCE  378912.46
#define SPEED 140.0

int main(void)
{
	float duration;
	
	duration = DISTANCE / SPEED;

	printf("The moon is %f km away. \n", DISTANCE);
	printf("Travelling at %f kph...\n", SPEED);
	printf("It would take %f hours to drive to the moon. \n", duration);
	printf("It would take %f days to reach the moon. \n", duration / 24);

	return 0;
}