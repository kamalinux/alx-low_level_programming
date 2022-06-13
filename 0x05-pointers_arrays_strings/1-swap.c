#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *@a: number being swapped
 *@b: number being swapped
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
