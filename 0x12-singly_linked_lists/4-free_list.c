#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: head of the linked list.
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (head != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
		node = head;
	}
}
