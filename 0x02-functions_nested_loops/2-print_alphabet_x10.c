#include "main.h"
/**
 * print_alphabet_x10 - Prints x10 alphabet
 *
 * q - alphabet
 * i - number of times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char q;
	int i = 0;

	while (i < 10)
	{
		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}
		_putchar('\n');

		i++;
	}
}
