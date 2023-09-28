#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer where
 *				the bit will be cleared.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if the operation was successful,
 *		or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	*n &= ~mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return (1);
}

