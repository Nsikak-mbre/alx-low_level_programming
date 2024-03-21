#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: points to the first node
 * @n: points to node data(int)
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *current_node;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);
	end_node-> n = n;
	end_node-> next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		end_node->prev = current_node;
		current_node->next = end_node;
	}
	return (end_node);
}



