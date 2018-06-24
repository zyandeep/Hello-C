/*
	#define to replace anything! 

	
*/

#include <stdio.h>

#define MAIN int main()
#define BEGIN {
#define END }
#define DECLEAR_DATA char name[30];
#define ASK_PROMT printf("What's your name? ");
#define GET_DATA fgets(name, 30, stdin);
#define PRINT1 printf("Sorry %s Can't talk now. \n", name);
#define PRINT2 printf("I'm busy \n");
#define EXIST_CODE return 0;

MAIN
BEGIN
DECLEAR_DATA
ASK_PROMT
GET_DATA
PRINT1
PRINT2
EXIST_CODE
END