#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array
 * @size: The number of element in array
 * @cmp: a pointer to the function to be used
 * to compare values
 *
 * Return: The index of the first element
 * for which the cmp function does not return
 */

int int_index(int *array, int size, int (*cmp) (int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
