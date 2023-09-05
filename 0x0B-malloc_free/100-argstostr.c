#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0, arg_length = 0;
	int i;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			arg_length++;
		}
		total_length += arg_length + 1;
	}

	concatenated = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			concatenated[k++] = av[i][arg_length++];
		}
		concatenated[k++] = '\n';
	}

	concatenated[k] = '\0';

	return (concatenated);
}
