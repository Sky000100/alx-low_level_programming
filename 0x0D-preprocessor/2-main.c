#include <stdio.h>

#define PRINT_FILE_NAME \
	printf("This program was compiled from the file: %s\n", __FILE__)

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the name of the file it was compiled from.
 *
 * Return: Always 0.
 */
int main(void)
{
	PRINT_FILE_NAME;
	return (0);
}

