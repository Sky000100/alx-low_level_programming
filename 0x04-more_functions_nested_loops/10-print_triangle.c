#include "main.h"

/**
 * print_triangle - Prints a triangle with '#' characters.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hight, base;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= size; space++)
			{
				if ((hight + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}

	}
}
