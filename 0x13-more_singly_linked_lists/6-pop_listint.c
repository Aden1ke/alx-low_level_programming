#include "lists.h"
/**
 * pop_listint - delete the first node and return 0.
 * @head: pointer of the first node.
 * Return:0 (succes).
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		data = tmp->n;
		free(tmp);
	}
	return (data);
}