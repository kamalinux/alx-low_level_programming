#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;
	int num, base;

	if (b == NULL)
		return (0);
	for (num = 0; b[num + 1]; num++)
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);
	}
	for (base = 1; num >= 0; num--, base *= 2)
		decimal_val += ((b[num] - '0') * (base));
	return (decimal_val);
}
