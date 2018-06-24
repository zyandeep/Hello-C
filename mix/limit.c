// limit.h for integers

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("char min = %d, max = %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char min = %u, max = %u\n", 0, UCHAR_MAX);

	printf("short min = %hd, max = %hd\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short min = %hu, max = %hu\n", 0, USHRT_MAX);

	printf("int min = %d, max = %d\n", INT_MIN, INT_MAX);
	printf("unsigned int min = %u, max = %u\n", 0, UINT_MAX);

	printf("long min = %ld, max = %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long min = %lu, max = %lu\n", 0UL, ULONG_MAX);

	printf("long long min = %lld, max = %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long min = %llu, max = %llu\n", 0ULL, ULLONG_MAX);

	printf("float min = %f, max = %f\n", FLT_MIN, FLT_MAX);
	printf("double min = %e, max = %e\n", DBL_MIN, DBL_MAX);
	printf("long double min = %Le, max = %Le\n", LDBL_MIN, LDBL_MAX);

	return 0;
}
