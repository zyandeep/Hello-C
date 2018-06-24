#include <stdio.h>

/* 
	function declearation OR
	function prototype OR
	function signature
*/
void joly(void);
void deny(void);


int main(void)
{
	joly();
	joly();
	joly();

	deny();
	
	return 0;
}

// function definations
void joly(void)
{
	puts("For he's a jolly good fellow!");
}

void deny(void)
{
	puts("Which noboby can deny!");

}