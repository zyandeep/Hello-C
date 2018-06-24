#include <stdio.h>
#include "../includes/myheader.h"


/* this function flushes any remaining input from the buffer */

void flush_input(void)
{
	while ( fgetc(stdin) != '\n')
		;
}
