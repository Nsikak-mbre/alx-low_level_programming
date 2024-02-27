#include "lists.h"
/**
 * sum_listint -  returns sum of int data in a list
 * @head: points to first node in a list
 * Return: 0 if list is empty, sum of list if otherwise
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
