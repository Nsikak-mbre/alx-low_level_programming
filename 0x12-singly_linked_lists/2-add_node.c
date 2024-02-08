#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at the beginning
 * @head: the beginning of the list
 * @str: elements of the list
 * Return: pointer to dynamically allocated list
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int size;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}
	for (size = 0; ptr[size];)
		len++;
	ptr->str = copy;
	ptr->len = size;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}



