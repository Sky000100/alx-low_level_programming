#include "main.h"

/**
 * print_triangle - Prints a triangle with '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int row = 1; row <= size; row++)
	{
		for (int space = size - row; space > 0; space--)
			_putchar(' ');

		for (int hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
