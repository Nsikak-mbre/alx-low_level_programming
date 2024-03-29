#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees up allocated node spaces
 * @head: pointer to first node
 * Return: 0 on success
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
