#include "main.h"

/**
 * print_numbers - _putchar the numbers, from 0 to 9, followed by a new line
 *
 * Return: no return
 */

void print_numbers(void)
{
	int ch;

	for (ch = 38; ch < 48; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
