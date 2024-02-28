#include "lists.h"
/**
 * delete_nodeint_at_index  - self explanatory
 * @head: points to first node
 * @index: postion to pop
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	size_t count = 0;

	current = *head;
	temp = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (count != index - 1 && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current->next == NULL || count != index - 1)
		return (-1);
	temp = current->next;
	current->next =  temp->next;
	free(temp);
	return (1);
}
