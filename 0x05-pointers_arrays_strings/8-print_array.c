#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *
 * @n: number of elements of the array to be printed
 * @a: parameter
 *
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int d;

	if (n > 0)
	{
		for (d = 0; n > d; d++)
		{
			if (d != n - 1)
			{
				printf("%d, ", a[d]);
			}
			else
			{
				printf("%d", a[d]);
			}
		}
	}
	printf("\n");
}

