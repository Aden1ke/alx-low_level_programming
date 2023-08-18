#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * @head: head of the linked list.
 * Return: sum of nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t  *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
