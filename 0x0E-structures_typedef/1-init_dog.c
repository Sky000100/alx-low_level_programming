#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog variable.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a character array for the dog's name.
 * @age: The age of the dog as a floating-point number.
 * @owner: Pointer to a character array for the owner's name.
 *
 * Description: This function initializes the members of a struct dog
 * variable with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
