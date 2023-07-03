#include "lists.h"
/**
 * list_len - count all the elements in the lis_t
 * @h: A pointer to singly linked list.
 * Return: counts
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
