/*
 * Program to implement "Pass-by-reference".
 * Author: Zyandeep
 * Date:   12-08-2015
 */

 #include <stdio.h>
 
 void go_south_east(int*, int*); 
 

 int main(void)
 {
 	int latitude = 32;
	int longitude = -64;

	printf("About to change direction: [%i, %i]\n", latitude, longitude);

	go_south_east(&latitude, &longitude);
	
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

 	return 0;
 }


 void go_south_east(int *lat, int *lon)
 {
 	*lat = *lat - 1;
 	*lon = *lon + 1;

 	return;
 } 
