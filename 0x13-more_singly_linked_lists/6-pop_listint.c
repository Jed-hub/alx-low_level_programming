#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and return the head node's data(n)
 * @head: the head of the node
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;

	free(tmp);
	return (i);
}
