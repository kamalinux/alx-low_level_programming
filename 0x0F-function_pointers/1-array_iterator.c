#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int arr_length;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;
	for (arr_length = 0; arr_length < size; arr_length++)
		action(array[arr_length]);
}
