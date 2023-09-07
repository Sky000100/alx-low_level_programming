#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array and initialize to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Description: Allocates memory for an array of `nmemb` elements, each of
 * size `size` bytes, and initializes the memory to zero. Returns a pointer
 * to the allocated memory.
 *
 * Return: A pointer to the allocated and initialized memory, or NULL on
 * failure or if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		((char *)ptr)[i] = 0;

	return (ptr);
}

