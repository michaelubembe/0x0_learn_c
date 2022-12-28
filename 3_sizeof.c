#include <stdio.h>

/**
 * programatically compute the size of
 * char and int on a machine
 */

int main(void)
{
	printf("Size of int: %lu bytes\nSize of char: %lu bytes\n", sizeof(int), sizeof(char));
	return (0);
}
