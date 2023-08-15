#include "main.h"
#include <stdio.h>
/**
 * _islower - Checks if a character is lowercase
 * @c: The ASCII value of the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
