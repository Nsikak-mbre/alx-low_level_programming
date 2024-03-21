#include "lists.h"
/**
 * add_dnodeint - Adds node at the beginnning
 * @head: points to first node
 * @n: holds integer data
 * Return: node, with a new one at beginning
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
