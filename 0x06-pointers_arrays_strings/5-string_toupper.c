#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - Convert lowercase letters of a string to uppercase.
 * @s: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}

	return (s);
}

