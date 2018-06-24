#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL_LETTERS 26
#define MAX_SIZE 256

enum
{
	A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z 
};

int count_letters[ TOTAL_LETTERS ] = { 0 };

void calc_letters( void );
void print_result( void );

int main( int argc, char *argv[] )
{
	calc_letters();
	print_result();

	return EXIT_SUCCESS;
}

void calc_letters( void )
{
	char buffer[ MAX_SIZE + 1 ];
	int i;

	while( fgets( buffer, MAX_SIZE + 1, stdin ) != NULL )
	{
		for ( i = 0; i < strlen( buffer ) - 1; ++i )
		{
			if ( isalpha( buffer[ i ] ) != 0 )
			{
				switch( buffer[ i ] )
				{
					case 'A':
					case 'a':	count_letters[ A ]++;	break;
					
					case 'B':
					case 'b':	count_letters[ B ]++;	break;

					case 'C':
					case 'c':	count_letters[ C ]++;	break;

					case 'D':
					case 'd':	count_letters[ D ]++;	break;

					case 'E':
					case 'e':	count_letters[ E ]++;	break;

					case 'F':
					case 'f':	count_letters[ F ]++;	break;

					case 'G':
					case 'g':	count_letters[ G ]++;	break;

					case 'H':
					case 'h':	count_letters[ H ]++;	break;

					case 'I':
					case 'i':	count_letters[ I ]++;	break;

					case 'J':
					case 'j':	count_letters[ J ]++;	break;

					case 'K':
					case 'k':	count_letters[ K ]++;	break;

					case 'L':
					case 'l':	count_letters[ L ]++;	break;

					case 'M':
					case 'm':	count_letters[ M ]++;	break;

					case 'N':
					case 'n':	count_letters[ N ]++;	break;

					case 'O':
					case 'o':	count_letters[ O ]++;	break;

					case 'P':
					case 'p':	count_letters[ P ]++;	break;

					case 'Q':
					case 'q':	count_letters[ Q ]++;	break;

					case 'R':
					case 'r':	count_letters[ R ]++;	break;

					case 'S':
					case 's':	count_letters[ S ]++;	break;

					case 'T':
					case 't':	count_letters[ T ]++;	break;

					case 'U':
					case 'u':	count_letters[ U ]++;	break;

					case 'V':
					case 'v':	count_letters[ V ]++;	break;

					case 'W':
					case 'w':	count_letters[ W ]++;	break;

					case 'X':
					case 'x':	count_letters[ X ]++;	break;

					case 'Y':
					case 'y':	count_letters[ Y ]++;	break;

					case 'Z':
					case 'z':	count_letters[ Z ]++;	break;

					default: puts( "Not alphabet. Missed by isalpha()" );
				}
			}
		}
	}
}

void print_result( void )
{
	char *string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for ( i = 0; i < TOTAL_LETTERS; ++i )
	{
		printf( "%c = %d\n", string[ i ], count_letters[ i ] );
	}
}
