#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 for incorrect argument count, 2 for negative bytes.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *((unsigned char *)main + i));
		if (i < num_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}

