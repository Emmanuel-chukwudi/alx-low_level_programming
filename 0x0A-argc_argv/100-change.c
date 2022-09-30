#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * coin_count - counts the coins needed
 * @count: coins counter
 * @num: argv[1] converted to integer
 * Return: integer
 */
unsigned int coin_count(unsigned int count, int num)
{
	unsigned int sum = 0;

	while (!(sum + 25 > (unsigned int)num))
	{
		sum += 25;
		count++;
	}
	while (!(sum + 10 > (unsigned int)num))
	{
		sum += 10;
		count++;
	}
	while (!(sum + 5 > (unsigned int)num))
	{
		sum += 5;
		count++;
	}
	while (!(sum + 2 > (unsigned int)num))
	{
		sum += 2;
		count++;
	}
	while (!(sum + 1 > (unsigned int)num))
	{
		sum += 1;
		count++;
	}
	return (count);
}

/**
 * main - prints the min num of coins to make chnge for an amnt of money
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	unsigned int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	count = coin_count(count, atoi(argv[1]));
	printf("%d\n", count);
	return (0);
}
