#include "main.h"

/**
 * reverse_array - Reverse an array
 * @a: input array
 * @n: number of elements of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
