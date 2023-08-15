#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line This
 *		function prints all the lowercase letters
 *		of the English alphabet in ascending order,
 *		followed by a new line.
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

