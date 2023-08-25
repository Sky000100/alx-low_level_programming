#include <stdio.h>

/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Negative value if s1 < s2, positive value if s1 > s2, 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
