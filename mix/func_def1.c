/*
	Function and variable definations 
	go in this file.
	
	date: 07-09-2015
*/

#include <checksum.h>


int checksum(char *msg)
{
	int c_sum = 0;

	while (*msg)
	{
		c_sum = c_sum + c_sum ^ (int) *msg;
		msg++;
	}

	return c_sum;
}
