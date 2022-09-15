#include "main.h"

/**
 * more_numbers - This function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	char i;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (1 = 0; i <= 14, i++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

