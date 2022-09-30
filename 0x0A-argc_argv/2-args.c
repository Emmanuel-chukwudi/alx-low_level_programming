#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector, an array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argc[a]);
	}
	return (0);
}
