#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (islower(c) || isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
