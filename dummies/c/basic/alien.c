/* un-initialised variables
 * garbage value
 */

#include <stdio.h>

int main(void)
{
	int age;
	float distance;

	age = 27;
	distance = 319.125;

	printf("The alien is %d years old and \n", age);
	printf("comes from a planet %f microns away \n", distance);

	return 0;
}