/*
 * Displaying a string backward
 * Author: Zyandeep
 * Date:   13-08-2015
 */

 #include <stdio.h>
 #include <string.h>

 void display_bkwd(char *); 
 
 
 int main(void)
 {
 	char str[80];
 	char rev_str[80];

 	puts("Enter the string -->");
 	fgets(str, 80, stdin);

 	strcpy(rev_str, strtok(str, "\n"));

 	display_bkwd(rev_str);

 	printf("Original string: %s\n", str);
 	printf("Reversed string: %s\n", rev_str);

 	return 0;
 }


 void display_bkwd(char ptr[])
 {
	char temp;
	int i, j, length;

	length = strlen(ptr);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;
	}

 	return;
 } 
