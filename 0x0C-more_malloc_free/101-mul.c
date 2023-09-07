#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string consists of digits only
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiply two positive numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: The result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, k;
	char *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
		{
			int temp = (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0') + carry;

			result[k] = temp % 10 + '0';
			carry = temp / 10;
		}
		result[i] += carry;
	}

	return (result);
}
