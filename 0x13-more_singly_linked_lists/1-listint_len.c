#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: The head of the node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
