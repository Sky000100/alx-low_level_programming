#include <stdio.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: A pointer to the resulting string (`dest`).
 */
char *_strcat(char *dest, const char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';

	return (dest);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (indicating success).
 */
int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";

	printf("Concatenated string: %s\n", _strcat(str1, str2));

	return (0);
}

