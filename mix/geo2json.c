/*
 * Input, output and error stream redirection
 * Author: Zyandeep
 * Date:   17-08-2015
 */

#include <stdio.h>

int main(void)
{
	float latitude = 0;
	float longitude = 0;
	char info[80];
	int started = 0;

	puts("data = [");

	while (scanf("%f %f %79[^\n]", &latitude, &longitude, info) == 3)
	{
		if (started)
		{
			printf(",\n");
		}
		else
		{
			started = 1;
		}

		// check for bad input data
		if (latitude < -90 || latitude > 90)
		{
			fprintf(stderr, "invalid latitude: %f\n", latitude);
			fprintf(stderr, "program is aborted");
			return 2;
		}

		if (longitude < -180 || longitude > 180)
		{
			fprintf(stderr, "invalid longitude: %f\n", longitude);
			fprintf(stderr, "program is aborted");
			return 2;
		}

		printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}

	puts("\n]");	

	return 0;
}