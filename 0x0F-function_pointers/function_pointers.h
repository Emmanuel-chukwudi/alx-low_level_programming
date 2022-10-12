#ifndef FUNCPOINTERS
#define FUNCPOINTERS

#include <stdlib.h>
#include <stdio.h>

void print_name(char *name, void (*f)(char *));

array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));



#endif /* FUNCPOINTERS */
