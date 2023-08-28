#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0;
	int s2 = 0;
	int itr;

	for (itr = 0; itr < size; itr++)
	{
		s1 += a[itr];
		s2 += a[size - itr - 1];
		a += size;
	}

	printf("%d, ", s1);
	printf("%d\n", s2);
}

