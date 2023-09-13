#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and applies
 *				a function to each element
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to apply
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
