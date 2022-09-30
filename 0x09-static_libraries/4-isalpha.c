#include "main.h"

/**
 * _isalpha - prints alphabetic characters
 * @c: the character to be checked
 *
 * Return: 1 for true and 0 for false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
