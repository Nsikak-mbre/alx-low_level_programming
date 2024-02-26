#include "lists.h"
/**
 * print_listint - prints all the elements in listint_t
 * @h: pointer to first node of listint_t
 * Return: number of elem in list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
