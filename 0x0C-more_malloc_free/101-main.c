#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, Success
 */
int main(int argc, char **argv)
{
	int len_1, len_2, len_r, temp, *sum_result;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len_1 = str_len(argv[1]), len_2 = str_len(argv[2]);
	len_r = len_1 + len_2;
	if (len_1 < len_2)
		num1 = argv[1], num2 = argv[2];
	else
	{
		num1 = argv[2], num2 = argv[1];
		temp = len_2, len_2 = len_1, len_1 = temp;
	}
	sum_result = multiply(num1, len_1, num2, len_2, len_r);
	if (sum_result == NULL)
		exit(98);
	print_me(sum_result, len_r);
	return (0);
}
