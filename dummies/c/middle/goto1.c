// C language's horrible keyword -- goto

#include <stdio.h>

int main(void)
{
	puts("I am now gonna tell you a story...");
	puts("A story that dates back 100AD...");
	puts("Once, there was a man named Chandler.");
	puts("His wife made him...");
	goto END;
	puts("die inside -- A classic chandler's sarcastic comment to monica.");

	END:
	puts("Oh no its the evil goto that ended the story abruptly!!");

	return 0;
} 