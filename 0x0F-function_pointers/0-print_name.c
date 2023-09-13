#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name
 * @name: The name to print
 * @f: Pointer to a function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
