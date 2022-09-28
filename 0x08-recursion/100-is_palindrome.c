#include "main.h"

/**
 * compare - compares head and tail for match
 * @head: starts from left string
 * @tail: starts from right sting or backwards
 * Return: 1 for empty string, 0 for anything else
 */

int compare(char *head, char *tail)
{
	if (head >= tail)
	{
		return (1);
	}
	if (*head == *tail)
	{
		return (compare(head + 1, tail - 1));
	}
	return (0);
}

/**
 * _strlen - finds the length of string
 * @s: string to work with
 * Return: lenght of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (_strlen(s)));
}

/**
 * _is_palindrome - check if it is an empty string
 * @s: string
 * Return: 1 if empty, 0 if not
 */

int _is_palindrome(char *s)
{
	int length = _strlen(s);

	return (compare(s, (s + length - 1)));
}
