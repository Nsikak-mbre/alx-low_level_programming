#include "lists.h"
/**
 * add_nodeint - add node at the beginning
 * @head: pointer to the pointer that points at first node
 * @n: holds int data
 * Return: new node on success, null otherwise
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node  = malloc(sizeof(listint_t));
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
