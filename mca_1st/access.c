#include <stdio.h>
#include <string.h>

int main()
{
	extern int age;
	extern char name[50];
	extern void display();
	
	age = 20; 
	strcpy(name, "Tyrion Lannister");

	display();
	return 0;
}
