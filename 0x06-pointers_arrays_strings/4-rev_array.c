#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: parameter
 * @n: number of element in an array
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int tmp;

	int c = n - 1;

	while (b <= c)
	{
		tmp = a[b];
		a[b] = a[c];
		a[c] = tmp;
		b++;
		c--;
	}
}
