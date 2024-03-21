#include "lists.h"
/**
 * dlistint_t *get_dnodeint_at_index - returns node at given position
 * @head: points to first node
 * @index: node to be returned
 * Return: Node at given index, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t count = 0;

	while (current != NULL && count != index)
	{
		current = current->next;
		count++;
	}
	if (count == index)
		return (current);
	else
		return (NULL);
}
