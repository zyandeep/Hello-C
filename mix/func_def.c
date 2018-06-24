/*
	Function and variable definations 
	go in this file.
	
	date: 30-08-2015
*/

#include <encrypt.h>

// this will encrypt/decrypt a plain text

void encrypt(char *msg)
{
	while (*msg != '\0')
	{
		*msg = *msg ^ 31;
		msg++;
	}
}
