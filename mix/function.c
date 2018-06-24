#include <stdio.h>

void my_func (void);

int main(void)
{
	puts("calling my_func...");	

	my_func();

	puts("inside main() again");	
	return 0;
}

void my_func (void)
{
	int a = 10, b = 20;

	puts("inside my_func");

	if (a = (a == 20 && printf("b = %i\n", b)));
	printf("new a = %i\n", a);

	// b = (b == 10 || a == printf("b = %i\n", b))

	if (b = b == 10 || a == printf("b = %i\n", b))
	printf("new b = %i\n", b);

	return;
}