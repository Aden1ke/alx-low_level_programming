#include "lists.h"
/**
 * sum_listint - count all the elements in the lis_t
 * @head: A pointer to singly linked list.
 * Return: counts
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
