#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	int divisor, num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	num = n;

	while (num > 9)
	{

		divisor *= 10;
		num /= 10;
	}

	while (divisor > 0)
	{
		int digit = n / divisor;

		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
