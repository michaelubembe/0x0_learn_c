#include <stdio.h>

int main(void)
{
	int var;
	int var1 = 3;
	var = var1;
	int var2, var3, var4;
	var2 = var3 = var4 = var;
	printf("%d,\n%d,\n%d,\n%d,\n%d.\n", var, var1, var2, var3, var4);
	return (0);
}
