#include "lists.h"
/**
 * add_nodeint_end - at node the list's end
 * @head: points to the header which points to first pointer
 * @n: contains int data
 * Return: new node at end on success, NUll otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *current;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = end_node;
	}
	return (end_node);
}
