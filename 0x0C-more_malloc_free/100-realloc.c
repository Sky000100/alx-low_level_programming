#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocate a memory block using malloc and free
 * @ptr: Pointer to the memory block to reallocate
 * @old_size: Size of the old memory block in bytes
 * @new_size: New size of the memory block in bytes
 *
 * Description: Reallocates the memory block pointed
 *			to by `ptr` to a new size
 * of `new_size` bytes. The contents will be copied to
 *			the newly allocated space,
 * in the range from the start of `ptr` up to the
 *		minimum of the old and new sizes.
 *
 * Return: A pointer to the newly allocated memory block,
 *				or NULL on failure or
 * if `new_size` is zero (in which case `ptr` is freed).
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		((char *)p)[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}

