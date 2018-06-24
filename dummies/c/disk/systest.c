#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int exit_status;

	printf("Press Enter to see a list of files in ");
	system("pwd"); 	
	getchar();

	exit_status = system("ls -lh | less");

	printf("Exit status of \"system\" is: %d\n", exit_status);

	return 0;
}