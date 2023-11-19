#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Displays length of nodes
 * @h: points to the head node or first node
 * Return: number counts of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

