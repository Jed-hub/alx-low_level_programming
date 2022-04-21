#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: The head of the node.
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *m = h;

	while (m != NULL)
	{
		printf("[%d] %s\n", m->len, m->str != NULL ? m->str : "(nil)");
		m = m->next;
		num++;
	}
	return (num);
}
