#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: head of the linked list.
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
		free(node);
		node = *head;
	}
}
