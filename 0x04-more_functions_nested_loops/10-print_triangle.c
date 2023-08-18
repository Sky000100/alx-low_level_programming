#include "main.h"

/**
 * print_triangle - Prints a triangle with '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int space, row;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= 0; space++)
			{
				if ((row + space) <= size)
					_putchar('');
				else
					_putchar('#');
			}
			_putchar('\n');
		}

	}
}
