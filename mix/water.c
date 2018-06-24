#include <stdio.h>
#define MASS_OF_WATER_MOLECULE 3.0e-23
#define QUART_OF_WATER_GRAM 950

int main(void)
{
	unsigned int water_amount_quart = 0.;
	unsigned int water_amount_gram = 0.;
	float water_molecule = 0;

	printf("Enter amount of water in quarts: ");
	scanf("%i", &water_amount_quart);

	water_amount_gram = water_amount_quart * QUART_OF_WATER_GRAM;
	water_molecule = water_amount_gram / MASS_OF_WATER_MOLECULE; 
	
	printf("Water molecule in %i quarts = %e\n", water_amount_quart, water_molecule);

	return 0;
}
