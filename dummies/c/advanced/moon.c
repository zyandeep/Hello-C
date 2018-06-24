#include <stdio.h>

int main(void)
{
	float duration;
	float distance = 378912.46;
	float speed = 140.0;
	
	float *pfloat;
	
	duration = distance / speed;

	pfloat = &distance;
	printf("The moon is %f km away. \n", *pfloat);
	
	pfloat = &speed;
	printf("Travelling at %f kph...\n", *pfloat);
	
	pfloat = &duration;
	printf("It would take %f hours to drive to the moon. \n", *pfloat);
	printf("It would take %f days to reach the moon. \n", *pfloat / 24);

	return 0;
}
