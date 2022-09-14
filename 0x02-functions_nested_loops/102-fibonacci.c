#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	long int num1, num2, a;

	num1 = 1;
	num2 = 2;

	printf("%ld, %ld", num1, num2);
	for (q = 0; q < 48; q++)
	{
		a = num1 + num2;
		printf(", %ld", a);
		num1 = num2;
		num2 = a;
	}
	printf("\n");
	return (0);
}
