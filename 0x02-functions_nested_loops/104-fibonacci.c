#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, boolean1, boolean2
	long int num1, num2, a, ab, num1a, num2a;

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
				num1a = num1 % 1000000000;
				num2a = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				boolean2 = 0;
			}
			ab = (num1a + num2a);
			a =  num1 + num2 + (ab / 1000000000);
			printf(", %ld", a);
			printf("%ld", ab % 1000000000);
			num1 = num2;
			num1a = num2a;
			num2 = a;
			num2a = (ab % 1000000000);
		}
		if (((num1 + num2) < 0) && boolean1 == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
