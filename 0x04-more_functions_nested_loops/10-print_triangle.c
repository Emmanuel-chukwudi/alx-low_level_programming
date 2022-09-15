#include "main.h"

/**
 * print_triangle - prints triangle with #'s given size
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int height, width, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= height; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
