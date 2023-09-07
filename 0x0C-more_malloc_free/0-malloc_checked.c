#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory with error checking
 * @b: Size of the memory block to allocate
 *
 * Description: Allocates memory of size 'b' using malloc
 * and checks for allocation success. Terminates the program
 * with an exit status of 98 if malloc fails.
 *
 * Return: A pointer to the allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}

	return (ptr);
}

