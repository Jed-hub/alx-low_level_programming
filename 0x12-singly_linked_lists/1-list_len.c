#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: The head of the node
 *
 * Return: result
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *l = h;

	while (l != NULL)
	{
		l = l->next;
		num++;
	}
	return (num);
}
