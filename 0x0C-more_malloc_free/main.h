#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>


void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void print_me(int *sum_result, int len_r);
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r);
int str_len(char *str);

#endif

