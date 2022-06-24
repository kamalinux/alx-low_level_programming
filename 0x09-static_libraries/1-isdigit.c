#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: contains value to be compared
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
