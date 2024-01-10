#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add new node at the end of list
 * @head: points to first node
 * @str: points to node data
 * Return: 0 & pointer to node at end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *temp;
	size_t count;
	char *dup_str;

	if  (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	dup_str = strdup(str);
		if (dup_str == NULL)
		{
			free(temp);
			return (NULL);
		}
	for (count = 0; str[count] != '\0'; count++)

	temp->str = dup_str;
	temp->count = count;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}
	return (*head);
}
