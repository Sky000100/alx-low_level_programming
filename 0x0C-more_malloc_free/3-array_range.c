#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create an array of integers from min to max
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Description: Allocates memory for an array of integers
 *					containing all values
 * from min to max, ordered from min to max (inclusive).
 * Returns a pointer to the newly created array.
 *
 * Return: A pointer to the newly created array
 *	or NULL on failure or if min > max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		arr[i] = min;

	return (arr);
}

