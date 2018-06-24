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

	while (scanf("%f %f %79[^\n]", &latitude, &longitude, info) == 3)
	{
		if (latitude >= 26 && latitude <= 34)
		{
			if (longitude <= -64 && longitude >= -76)
			{
				printf("%f %f %s\n", latitude, longitude, info);
			}
		}
		
	}

	puts("\n]");	

	return 0;
}