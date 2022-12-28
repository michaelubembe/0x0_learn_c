#include <stdio.h>
#include <wchar.h>

/**
 * programatically compute the size of
 * char and int on a machine
 */

int main(void)
{
	printf("Size of int: %lu bytes\nSize of char: %lu bytes\n", sizeof(int), sizeof(char));
	printf("Size of long int: %lu bytes\nSize of large char: %lu bytes\n", sizeof(long int), sizeof(wchar_t));
	return (0);
}
