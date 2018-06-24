int main(void)
{
	int a = 5, b = 2;

	// printf(Hello, World!\n");	compiler error
	// pritf("Hello, World!\n");	linker error

	/* C is white space insensitive */
	# define TEST "zyandeep"
	# include <stdio.h>
	
	int result;

	printf("Hello, World!\n");
	printf("My name is %s\n", TEST);

	/* ',' is a seperator, but it can be used as opeeator too */
	
	printf("%d\n", result = (a++, ++b));

	return 0;
}