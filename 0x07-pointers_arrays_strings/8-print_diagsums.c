#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a matrix
 * @a: parameter for matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int d_sum1 = 0;
	int d_sum2 = 0;
	int row, b;

	for (row = 0; row < size; row++)
	{
		b = (row * size) + row;
		d_sum1 += a[b];
	}
	for (row = 1; row <= size; row++)
	{
		b = (row * size) - row;
		d_sum2 += a[b];
	}

	printf("%d, %d\n", d_sum1, d_sum2);
}
