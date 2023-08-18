#include "main.h"

/**
 * print_triangle - Prints a triangle with '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hght, base;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (hght = 1; hght <= size; hght++)
		{
			for (base = 1; base <= size; space++)
			{
				if ((hght + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}

	}
}
