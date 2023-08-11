#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all lowercase alphabet letters
 * except for 'e', 'i', and 'o', followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
	char c;

	for (c = 'a'; c <= 'z'; c++)
		{
			if (c != 'q' && c != 'e')
				{
					putchar(c);
				}
		}

	putchar('\n');

	return 0;
}
