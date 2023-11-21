#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds node at beginning
 * @head: points to first node
 * @str: points to charcter array of struct member
 * Return: 0 & pointer to new node at beginning of array
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *firstnode;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	dup_str = strdup(str);

	if (dup_str == NULL)
		return (NULL);
	firstnode = malloc(sizeof(list_t));

	if (firstnode == NULL)
	{
		free(dup_str);
		return (NULL);
	}
	firstnode->str = dup_str;
	firstnode->next = *head;
	*head = firstnode;
	return (firstnode);
}



