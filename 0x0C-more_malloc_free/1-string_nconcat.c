#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenate two strings, with a limit on s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Description: Concatenates s1 and the first n bytes of s2 into a newly
 * allocated string. If n is greater than or equal to the length of s2, the
 * entire s2 is concatenated. If s1 or s2 is NULL, treat them as empty strings.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL if
 * memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		continue;

	for (len2 = 0; s2[len2]; len2++)
		continue;

	if (n >= len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}

