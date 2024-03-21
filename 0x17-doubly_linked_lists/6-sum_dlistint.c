#include "lists.h"
/**
 * sum_dlistint - sums int data in a list
 * @head: points to first node in a list
 * Return: sum of int data from a list
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
