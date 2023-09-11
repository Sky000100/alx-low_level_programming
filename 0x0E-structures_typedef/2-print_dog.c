#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the details of a struct dog, including
 * its name, age, and owner. If any element is NULL, it prints "(nil)" instead.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
