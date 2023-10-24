#include "list.h"
#include <stdio.h>

/**
 * print_listint - list all element
 * @h: pointer to list_t list index
 * Return: numbe rof nodes in list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (!h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list++;
	}
	return (list);
}
