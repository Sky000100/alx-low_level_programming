#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void function_using_function_pointer(int arg1, double arg2, void (*callback)(int, double));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif

