#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{
	char *address1;
	char *address2;
	char *city;
	char *state;
	char *zip;
};

typedef struct data RECORD;

int main( void )
{
	/* Initialising only selective members */

	RECORD my_address = {
		.zip = "785001",
		.city = "Jorhat",
		.state = "Assam"
	};

	my_address.address1 = strdup( "B.P.Road" );
	my_address.address2 = "Rajamaidam";

	printf("%s\n", my_address.address1);
	printf("%s\n", my_address.address2);
	printf("%s\n", my_address.city);
	printf("%s\n", my_address.state);
	printf("%s\n", my_address.zip);
	
	free( my_address.address1 );

	return 0;
}