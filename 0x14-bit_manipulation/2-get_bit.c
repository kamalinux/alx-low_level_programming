#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, j;

	if (index > (sizeof(unsigned int) * 8))
		return (-1);

	i = n >> index;
	j = i & 1;
	return (j);
}
