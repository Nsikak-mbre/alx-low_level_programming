#include <stdio.h>
#include  <string.h>
#include "lists.h"
/**
 * print_list - prints elements in list
 * @h: contains the elements
 * Return: 0 & elements of the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
