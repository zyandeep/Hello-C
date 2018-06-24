/* Program no : 2
 * 
 * The distance between two cities (in km.) is input through the
 * keyboard. Write a program to convert and print this distance
 * in meters, feet, inches and centimeters.
 */

#include <stdio.h>

int main()
{
	int dis_km = 0;
	float dis_m, dis_ft, dis_in, dis_cm;
	
	puts("Enter the distance in kilometer -->");
	scanf("%d", &dis_km);
	
	// conversion
	dis_m = dis_km * 1000;
	dis_cm = dis_m * 100;
	dis_ft = dis_m * 3.28;
	dis_in = dis_cm * 0.39;
	
	puts("Distance in.... ");
	printf("kilometer = %d km\n", dis_km);
	printf("meter = %.2f m\n", dis_m);
	printf("feet = %.2f ft\n", dis_ft);
	printf("inch = %.2f in\n", dis_in);
	printf("centimeter = %.2f cm\n", dis_cm);
	
	return 0;
}

