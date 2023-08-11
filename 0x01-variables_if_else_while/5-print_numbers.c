#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the single-digit numbers in base 10,
 * ranging from 0 to 9, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return (0);
}
