#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: number of times to print the character '_'
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
