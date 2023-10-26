#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints the binary representation
 *					of a number.
 * @n: The number to be converted to binary and
 *					printed.
 *
 * Description: This function prints the binary
 *				representation of an
 * unsigned long integer using bitwise manipulation.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}

