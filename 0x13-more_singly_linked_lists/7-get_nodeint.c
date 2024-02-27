#include "lists.h"
/**
 * get_nodeint_at_index - return a given node
 * @head: points to first node
 * @index: position of node to return
 * Return: Null if failed, struct node on succes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
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
