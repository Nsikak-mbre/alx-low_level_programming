#include "lists.h"
/**
 * listint_len - print number of element
 * @h: points to the first node
 * Return: number of elem
 */
size_t listint_len(const listint_t *h)
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

