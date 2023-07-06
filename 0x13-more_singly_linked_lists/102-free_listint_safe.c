#include "lists.h"
/**
 * free_listint_safe - free the linked list.
 * @h: pointer to the first node
 * Return: count
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node = *h;
	size_t count = 0;

	while (*h != NULL)
	{
		count++;
		*h = (*h)->next;
		free(node);
		node = *h;
	}
	return (count);
}
