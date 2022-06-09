#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 * @c: contains value to be compared
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
