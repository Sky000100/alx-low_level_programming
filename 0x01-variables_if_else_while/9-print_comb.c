#include <stdio.h>

/**
 * main - Entry point
 *
 * This program generates and prints all possible combinations of two-digit
 * numbers (00 to 99), separated by commas and spaces, using the putchar
 * function exactly four times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens_digit, ones_digit;

	for (tens_digit = 0; tens_digit < 10; tens_digit++) 
	{
		for (ones_digit = 0; ones_digit < 10; ones_digit++)
		{
		putchar(tens_digit + '0');
		putchar(ones_digit + '0');

		if (tens_digit < 9 || ones_digit < 9)
			{
                	putchar(',');
                	putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
