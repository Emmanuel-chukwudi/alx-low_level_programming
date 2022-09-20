#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, d, s;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		a = d = s = 0;
		while ((2772 - 122) > s)
		{
			b = rand() % 62;
			p[a] = c[b];
			s += c[b];
			a++;
		}
		while (c[d])
		{
			if (c[d] == (2772 - s))
			{
				p[a] = c[d];
				s += c[d];
				a++;
				break;
			}
			d++;
		}
	}
	p[a] = '\0';
	printf("%s", p);
	return (0);
}
