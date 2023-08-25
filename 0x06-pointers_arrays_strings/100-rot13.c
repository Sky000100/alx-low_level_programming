#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_alphabet = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr)
	{
		int index = 0;

		while (alphabet[index])
		{
			if (*ptr == alphabet[index])
			{
				*ptr = rot13_alphabet[index];
				break;
			}
			index++;
		}
		ptr++;
	}

	return (str);
}
