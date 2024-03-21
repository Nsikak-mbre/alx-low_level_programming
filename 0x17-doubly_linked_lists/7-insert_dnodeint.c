#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given index
 * @h: points to first node
 * @idx: index to insert
 * @n:data
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	size_t count = 0;

	current = *h;
	if (idx == 0 || h == NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || count != idx - 1)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = current;
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
