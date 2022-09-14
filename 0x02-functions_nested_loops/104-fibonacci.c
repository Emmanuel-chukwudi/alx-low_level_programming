#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, boolean1, boolean2
	long int num1, num2, a, q, num11, num22;

	num1 = 1;
	num2 = 2;
	boolean1 = boolean2 = 1;
	printf("%ld, %ld", num1, num2);
	for (c = 0; c < 96; c++)
	{
		if (boolean1)
		{
			a = num1 + num2;
			printf(", %ld", a);
			num1 = num2;
			num2 = a;
		}
		else
		{
			if (boolean2)
			{
				num11 = num1 % 1000000000;
				num22 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean2 = 0;
			}
			q = (num11 + num22);
			a =  num1 + num2 + (q / 1000000000);
			printf(", %ld", a);
			printf("%ld", q % 1000000000);
			num1 = num2;
			num11 = num22;
			num2 = a;
			num22 = (q % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean1 == 1)
			boolean1 = 0;
	}
	printf("\n");
	return (0);
}
