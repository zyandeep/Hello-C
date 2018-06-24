/* A debugging printf() may look liks this 
 * 
 * 	printf(“\n***%d***\n”,*var++);
 */

#include <time.h>
#include "lotto.h"

int ball[BALLS];		/* Global lotto ball array */

int main(void)
{
	init();
	select_ball();
	sort();
	display();
	
	return 0;
}