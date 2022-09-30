#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds only positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}

