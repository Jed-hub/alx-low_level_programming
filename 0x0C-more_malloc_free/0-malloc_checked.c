#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: The integer.
 *
 */

void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(b);

	if (!check)
	{
		exit(98);
	}

	return (check);
}
