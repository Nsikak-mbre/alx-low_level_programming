#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end -  adds node at the end
 * @head: points to start node
 * @str: element of the list
 * Return: pointer to rear-end dynamically allocated node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	int size;
	list_t *ptr, *current;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	copy =  strdup(str);
	if (copy == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (size = 0; str[size];)
		size++;
	ptr->str = copy;
	ptr->len = size;

	if (*head == NULL)
	{
		*head =  ptr;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ptr;
	}
	return (ptr);
}
