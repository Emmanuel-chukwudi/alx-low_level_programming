#include "main.h"

/**
 * print_number - prints an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int t, d, positive = n;
	double Tang = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}
		while (Tang <= positive)
		{
			Tang *= 10;
		}
		t = Tang / 10;

		while (t >= 1)
		{
			d = positive / t;
			_putchar(d + '0');
			positive = (positive - (t * d));
			t /= 10;
		}
	}
}

