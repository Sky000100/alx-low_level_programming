#include <stdio.h>

/**
 * leet - Encodes a string into "1337".
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "AEOTL";
	char *leet_replacements = "43071";

	while (*ptr)
	{
		int index = 0;

		while (leet_chars[index])
		{
			if (*ptr == leet_chars[index] || *ptr == leet_chars[index] + 32)
			{
				*ptr = leet_replacements[index];
				break;
			}
			index++;
		}
		ptr++;
	}

	return (str);
}
