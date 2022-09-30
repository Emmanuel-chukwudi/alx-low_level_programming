#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make chnge for an amnt of money
 * @argc: argument count
 * @argv: argument vector, an array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	unsigned int cnt = 0;

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
	cnt = coin_cnt(cnt, atoi(argv[1]));
	printf("%d\n", cnt);
	return (0);
}

/**
 * coin_cnt - This counts the minimum coins needed
 * @cnt: coins counter
 * @num: argv[1] converted to integer
 * Return: integer
 */
unsigned int coin_cnt(unsigned int cnt, int num)
{
	unsigned int sum = 0;

	while (!(sum + 25 > (unsigned int)num))
	{
		sum += 25;
		cnt++;
	}
	while (!(sum + 10 > (unsigned int)num))
	{
		sum += 10;
		cnt++;
	}
	while (!(sum + 5 > (unsigned int)num))
	{
		sum += 5;
		cnt++;
	}
	while (!(sum + 2 > (unsigned int)num))
	{
		sum += 2;
		cnt++;
	}
	while (!(sum + 1 > (unsigned int)num))
	{
		sum += 1;
		cnt++;
	}
	return (cnt); /* cnt is counter for coins */
}
