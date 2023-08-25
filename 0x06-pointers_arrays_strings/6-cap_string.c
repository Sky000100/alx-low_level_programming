#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_separator - Check if a character is a word separator.
 * @c: The character to check.
 *
 * Return: True if c is a separator, false otherwise.
 */
bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (separators[i] == c)
		{
			return (true);
		}
	}

	return (false);
}

/**
 * cap_string - Capitalize all words in a string based on separators.
 * @s: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	bool new_word = true;
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = true;
		}
		else if (new_word)
		{
			*ptr = toupper(*ptr);
			new_word = false;
		}
		else
		{
			*ptr = tolower(*ptr);
		}
		ptr++;
	}

	return (s);
}
