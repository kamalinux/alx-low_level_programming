#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @c: Pointer to first element
 *
 * Return: c
 */
char *string_toupper(char *c)
{
	int count = 0;

	while (*(c + count) != '\0')
	{
		if ((*(c + count) >= 97) && (*(c + count) <= 122))
			*(c + count) = *(c + count) - 32;
		count++;
	}

	return (c);
}
