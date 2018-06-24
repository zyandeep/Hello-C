/*
	different int type and their sizes
	example of data overflow 

	%d or %i and %u are oppsite of each other
		%d or %i = signed int
		%u = unsigned int

	u, l/L, h, l/LL can be used with octal and hex numbers
*/

#include <stdio.h>

void print_int(void);
void overflow(void);
void print_const(void);
void print_data_type(void);

int main(void)
{
	puts("\n sizes of different int depends on the machin's architecture");
	puts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	print_int();
	
	puts("\n overflow int values go to their stating values");
	puts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	overflow();

	puts("\n represent different integers constants");
	puts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	print_const();

	puts("\n printing different signed/unsigned integers");
	puts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	print_data_type();

	return 0;
}

void print_int(void)
{
	printf("sizeof char = %lu bytes\n", sizeof(char));
	printf("sizeof short/sort int = %lu bytes\n", sizeof(short int));
	printf("sizeof int = %lu bytes\n", sizeof(int));
	printf("sizeof long/long int = %lu bytes\n", sizeof(long int));
	printf("sizeof long long/long long int = %lu bytes\n", sizeof(long long int));
	printf("sizeof float = %lu bytes\n", sizeof(float));
	printf("sizeof double = %lu bytes\n", sizeof(double));
	printf("sizeof long double = %lu bytes\n", sizeof(long double));
}

void overflow(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);
}

void print_const(void)
{
	// default choice is int, othewise it goes upward like unsigned int, long, ungigned long...

	printf("sizeof 32 = %lu\n", sizeof(32));
	printf("sizeof 32L = %lu\n", sizeof(32L));
	printf("sizeof 32LL = %lu\n", sizeof(32LL));
	printf("sizeof 32U = %lu\n", sizeof(32U));
	printf("sizeof 32UL = %lu\n", sizeof(32UL));
	printf("sizeof 32LLU = %lu\n", sizeof(32ULL)); 

	printf("sizeof 032 = %lu\n", sizeof(032));
	printf("sizeof 0x32L = %lu\n", sizeof(0x32L));
	printf("sizeof 0xAFULL = %lu\n", sizeof(0xAFULL));
	printf("sizeof 0b1001 = %lu\n", sizeof(0b1001));

}

void print_data_type(void)
{
	signed short int si = -80;			// short
	unsigned short int usi = 120; 		// unsigned short

	int i = -5443;
	unsigned ui = 54432;				// unsigned int ui = 54432;
	
	long int li = -223123L;					// long
	unsigned long int uli = 12321145UL;		// unsigned long

	long long int lli = -23456789LL;					// long long
	unsigned long long int ulli = 1234567809LLU;		// unsigned long long

	int o = 0231;
	unsigned long ulh = 0XBAC123UL;
	long long llh = 0x32LL;
	unsigned short uso = 012;
	short sh = 0x2a;


	// printing all different integer types
	printf("si = %hi\n", si);
	printf("usi = %hu\n", usi);
	printf("i = %i\n", i);
	printf("ui = %u\n", ui);
	printf("li = %li\n", li);
	printf("uli = %lu\n", uli);
	printf("lli = %lli\n", lli);
	printf("ulli = %llu\n", ulli);
	printf("o = %o\n", o);
	printf("ulh = %lu, %lX\n", ulh, ulh);
	printf("llh = %llX\n", llh);                                                                                                                                                                
	printf("uso = %hu, %ho\n", uso, uso);
	printf("sh = %hx\n", sh);
}