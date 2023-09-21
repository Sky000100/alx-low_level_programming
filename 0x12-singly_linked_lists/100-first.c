#include <stdio.h>

/**
 * print_message - Constructor function to print a message.
 */
void print_message(void) __attribute__((constructor));

/**
 * print_message - Constructor function to print a message.
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,"
		"\nI bore my house upon my back!\n");
}


