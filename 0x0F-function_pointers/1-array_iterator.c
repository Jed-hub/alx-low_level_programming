#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: The array
 * @size: The size of the array.
 * @action: The function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || !size)
	{
		return;
	}

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
