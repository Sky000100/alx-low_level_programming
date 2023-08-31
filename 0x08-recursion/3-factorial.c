#include <stdio.h>

/**
 * factorial - Calculates the factorial of a given number using recursion.
 * @n: The number for which factorial is calculated.
 *
 * Return: Factorial of the number. If n is negative, return -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
