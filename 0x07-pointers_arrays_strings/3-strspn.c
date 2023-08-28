#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search in.
 * @accept: The string containing acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_accepted;
	char *a;

	while (*s)
	{
		is_accepted = 0;
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				is_accepted = 1;
				break;
			}
			a++;
		}

		if (is_accepted)
			count++;
		else
			break;

		s++;
	}

	return (count);
}

