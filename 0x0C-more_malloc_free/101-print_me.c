#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_me - prints my array of the hopeful product here
 * @sum_result: pointer to int array with numbers to add
 * @len_r: length of result array
 * Return: void
 */
void print_me(int *sum_result, int len_r)
{
	int i = 0;

	while (sum_result[i] == 0 && i < len_r)
		i++;
	if (i == len_r)
		_putchar('0');
	while (i < len_r)
		_putchar(sum_result[i++] + '0');
	_putchar('\n');
}
