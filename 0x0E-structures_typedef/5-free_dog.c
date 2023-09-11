#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory associated with a dog_t structure.
 * @d: Pointer to the dog_t structure to be freed.
 *
 * Description: This function frees the memory allocated for a dog_t
 * structure, including the dynamically allocated strings for name and owner.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

