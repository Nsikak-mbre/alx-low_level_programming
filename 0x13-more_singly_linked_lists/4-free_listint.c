#include "lists.h"
/**
 * free_listint - frees allocated memory
 * @head: points to first node in list
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
