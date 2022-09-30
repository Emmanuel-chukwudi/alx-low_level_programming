#include "main.h"
/**
 * _islower - This will check for lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase character and 0 for any other value (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);

}
