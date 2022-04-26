#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: the head of the node
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int i = 0, s = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		/*if (head != NULL)
		{*/
		s += head->n;
		head = head->next;
			/*s +=  head->n;*/
		/*}

		else
			return (0);*/

		i++;
	}
	return (s);
}
