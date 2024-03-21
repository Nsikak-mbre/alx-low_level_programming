#include "lists.h"
/**
 * dlistint_len - Print number of elem
 * @h: point to first node
 * Return: Number of ele in a node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

