#include <stdio.h>

#define KPM 1.609344

int main(void)
{
	float miles, kilometers;
	float *pmiles;
	float *k_address;

	char string[] = "Hello";

	printf("Enter a value in miles: ");
	scanf("%f", &miles);

	kilometers = KPM * miles;
	// printf("%.2f miles works out to %.2f kilometers.\n", miles, kilometers);

	k_address = &kilometers;
	pmiles = &miles;

	printf("%.2f miles works out to %.2f kilometers.\n", *pmiles, *k_address);
	
	/*printf("Variable 'miles' is at address = %p\nIt's %lu bytes long\n\
Value at %p is: %.2f\n", pmiles, sizeof(*pmiles), pmiles, *pmiles);
*/
	printf("string[] = %p\n", string);
	printf("&string[] = %p\n", &string);

	return 0;
}