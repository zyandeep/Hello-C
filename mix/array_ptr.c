/*
 * String literals(constants) vs character array
 * Author: Zyandeep
 * Date:   12-08-2015
 */

 #include <stdio.h>
 
 void go_south_east(char []); 
 

 int main(void)
 {
 	// const char *str1 = "Hello";

 	char const *str1 = "Hello";
 	char str2[] = "Hello";
 	char *ptr;

 	ptr = str2;

 	printf("sizeof(ptr) = %li bytes\n", sizeof(ptr));
 	printf("sizeof(str2) = %li bytes\n", sizeof(str2));
 	printf("address of ptr = %p\n", &ptr);
 	printf("address of str2 = %p\n", &str2);
 	printf("value of str2 = %p\n", str2);

 	go_south_east(str2);

 	str1 = "World";
 	// *(str1 + 1) = 'Z';

 	return 0;
 }


 void go_south_east(char ptr[]  /* or char *ptr */ )
 {
	puts("Inside function... ");

	printf("sizeof(ptr) = %li bytes\n", sizeof(ptr));
 	printf("address of ptr = %p\n", &ptr);

 	return;
 } 
