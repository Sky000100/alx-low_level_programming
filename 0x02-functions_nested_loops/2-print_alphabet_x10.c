#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times,
 *		followed by new lines
 *
 * Description: This function prints all the lowercase letters
 *		of the English alphabet in ascending order,
 *		ten times, each followed by a new line.
 */
void print_alphabet_x10(void);
{
	char letter;
	int repeat;

	for (repeat = 0; repeat < 10; repeat++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
		_putchar('\n')
	}
}
