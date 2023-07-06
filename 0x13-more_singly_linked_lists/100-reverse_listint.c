#include "lists.h"
/**
 * *reverse_listint - reverse the linked list.
 * @head: pointer to the first node
 * Return: *head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *pre_node = NULL;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}
	while (head != NULL && *head != NULL)
	{
		current = (*head)->next;
		(*head)->next = pre_node;
		pre_node = *head;
		*head = current;
	}
	*head = pre_node;
	return (*head);
}
