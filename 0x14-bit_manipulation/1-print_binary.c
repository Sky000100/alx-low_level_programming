#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int leading_zeros = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}


	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;

		if (bit == 1)
			leading_zeros = 0;

		if (!leading_zeros)
			putchar(bit + '0');

		shift--;
	}
}

