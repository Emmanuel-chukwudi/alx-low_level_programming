#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1, num2, a, ab;

	num1 = 1;
	num2 = 2;
	a = ab = 0;
	while (a <= 4000000)
	{
		a = num1 + num2;
		num1 = num2;
		num2 = a;
		if ((num1 % 2) == 0)
		{
			ab += num1;
		}
	}
	printf("%ld\n", ab);
	return (0);
}
