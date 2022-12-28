#include <stdio.h>
#include <limits.h>

int main()
{
	int var1 = INT_MIN;
	int var2 = INT_MAX;
	unsigned int var3 = 0;
	unsigned int var4 = UINT_MAX;
	short int var5 = SHRT_MIN;
	short int var6 = SHRT_MAX;

	printf("Range of signed integer is from %d to %d\n", var1, var2);
	printf("Range of unsigned integer is from %u to %u\n", var3, var4);
	printf("Range of short signed integer is from %d to %d\n", var5, var6);
	return (0);
}
