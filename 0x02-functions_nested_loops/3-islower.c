#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: The ASCII value of the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int result;

	result = _islower(ch);
	if (result)
		_putchar('Y');
	else
		_putchar('N');

	return (0);
}
