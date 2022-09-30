#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: arguement counter
 * @argv: arguement vector, array of argv
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

