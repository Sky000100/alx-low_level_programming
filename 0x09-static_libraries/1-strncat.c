#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of characters to append.
 *
 * Return: A pointer to the resulting string (`dest`).
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';
	return (dest);
}
