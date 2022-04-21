#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the head of the node
 * @str: the string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node;
	list_t *new_node;
	int l = 0;

	current_node = *head;
	while (current_node && current_node->next != NULL)
		current_node = current_node->next;
	while (str[l] != '\0')
		l++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = l;
	new_node->next = NULL;

	if (current_node)
		current_node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
