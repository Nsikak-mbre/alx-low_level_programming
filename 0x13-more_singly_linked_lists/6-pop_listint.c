#include "lists.h"
/**
 * pop_listint - deletes head list
 * @head: points to first node
 * Return: data in head node
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);
	return (num);

}
