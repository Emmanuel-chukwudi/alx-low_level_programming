#include "main.h"
#include <stdio.h>

/**
 *  print_buffer - prints buffer
 *
 *  @b: buffer
 *
 *  @size: size
 *
 *  Return: Always 0
 */

void print_buffer(char *b, int size)
{
	int a, c, d;

	a = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		c = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (d = 0; d < 10; d++)
		{
			if (a < c)
			{
				printf("%02x", *(b + a + d));
			}
			else
			{
				printf(" ");
			}
			if (d % 2)
			{
				printf(" ");
			}
		}
		for (d = 0; d < c; d++)
		{
			int f = *(b + a + d);

			if (f < 32 || f > 132)
			{
				f = '.';
			}
			printf("\n");
			a += 10;
		}
	}
}

