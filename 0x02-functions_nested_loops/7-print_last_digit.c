#include "main.h"

/**
 * print_last_digit - Returns the value of the last digit.
 *
 * @n: the int to print
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
	digit = (-1 * (n % 10));
	_putchar (digit + '0');
	return (digit);
	}
	else
	{
	digit = (n % 10);
	_putchar (digit + '0');
	return (digit);
	}
}
