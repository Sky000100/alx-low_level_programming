#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	int num_words;
	int word_index;
	char *token;
	char **words;
	int i;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	word_index = 0;
	token = strtok(str, " \t\n");

	while (token != NULL)
	{
		words[word_index] = strdup(token);
		if (words[word_index] == NULL)
		{
			for (i = 0; i < word_index; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		word_index++;
		token = strtok(NULL, " \t\n");
	}

	words[word_index] = NULL;
	return (words);
}
