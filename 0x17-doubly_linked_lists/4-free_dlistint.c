#include "lists.h"
/**
 * free_dlistint - function that frees a list_t list.
 * @head: head of the linked list.
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (head != NULL)
	{
		head = head->next;
		free(node);
		node = head;
	}
}
