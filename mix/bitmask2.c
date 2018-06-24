/* C Bitwise operator useages---
	
	1. AND(&) --> to check a praticular bit on/off, to turn a bit off.
	2. OR(|) --> to set a praticular bit on.
	3. XOR(^) --> to flip/toggle a praticular bit. 

*/


#include <stdio.h>

void actions (char);


int main(void)
{
	actions('m');
	actions('S');

	return 0;
}


void actions (char c)
{
	// check whether a letter is small or caps
	if (c & 0b00100000)
	{
		puts("its a small letter");
	}
	else {
		puts("its a capital letter");	
	}

	// convert caps to small and vice-versa
	c = c ^ 0x20;
	printf("flipping/toggling the 3rd bit --> %c\n", c);

	// convert caps to small
	c = c | 0x20;
	printf("setting the 3rd bit to 1 --> %c\n", c);

}
