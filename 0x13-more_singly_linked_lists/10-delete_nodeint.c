#include "lists.h"
/**
 * delete_nodeint_at_index  - self explanatory
 * @head: points to first node
 * @index: postion to pop
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *current;
	size_t count = 0;

	current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL &&  count < index - 1)
	{
		temp = current;
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
		return (-1);

	temp->next = current->next;
	free(current);
	return (1);
}
