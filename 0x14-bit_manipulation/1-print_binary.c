#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
	return;
	}
	else
	{
		print_binary(n >> 1);
		n = n & 1;
		_putchar(n + '0');
	}
}
