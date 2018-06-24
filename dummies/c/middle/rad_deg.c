// radian-degree conversion

#include <stdio.h>

#define DEG2RAD 0.0174532925
#define RAD2DEG 57.2957795

int main(void)
{
	float radian;
	float degree;
	char ans;

	puts("CHOOSE YOUR OPTION: ");
	puts("\t1. radian to degree.");
	puts("\t2. degree to radian.");
	printf("Enter your choice: ");
	ans = getchar();

	switch (ans)
	{
		case '1':
			printf("Enter a value in radians: ");
			scanf("%f", &radian);
			degree = radian * RAD2DEG;
			printf("%f radians is %f degrees\n", radian, degree);
			break;

		case '2':
			printf("Enter a value in degrees: ");
			scanf("%f", &degree);
			radian = degree * DEG2RAD;
			printf("%f degree is %f radians\n", degree, radian);
			break;

		default:
			puts("Enter a legitimate value, you fool!");

	}

	return 0;
}