#include "lists.h"
/**
 * free_dlistint - fees list
 * @head: points to first node
 * Return: always EXIT_SUCCESS
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
