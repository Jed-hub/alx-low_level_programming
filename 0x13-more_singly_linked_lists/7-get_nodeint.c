#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the node
 * @index: the index of the node starting at 0
 *
 * Return: the nth node of the list
 * or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (n < index)
	{
		if (head != NULL)
			head = head->next;
		else
			return (NULL);
		n++;
	}

	return (head);
}
