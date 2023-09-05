#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length_s1 = 0, length_s2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	concatenated = (char *)malloc(length_s1 + length_s2 + 1);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[i + j] = '\0';

	return (concatenated);
}
