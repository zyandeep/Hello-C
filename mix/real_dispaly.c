/* i can use any of %f, %e, %a to input float number 
   i can input float number in any from-- scintific, fixed-point abd hex-p notition

   ditto for integer

   MAKE SURE THE TYPE OF FORMAT SPECIFIER MATCHES THE TYPE OF INPUT DATA
*/

#include <stdio.h>

int main(void)
{
	// float input = 0.;
	int i = 0;

	/*printf("Enter a real number: ");
	scanf("%a", &input);

	printf("fixed-point notation: %f\n", input);
	printf("scientific/exponental notation: %e\n", input);
	printf("hex-p notation: %a\n", input);*/


	printf("Enter a integer number: ");
	scanf("%i", &i);

	printf("decimal form: %d\n", i);
	printf("octal form: %o\n", i);
	printf("hex form: %#x\n", i);
	
	return 0;
}
