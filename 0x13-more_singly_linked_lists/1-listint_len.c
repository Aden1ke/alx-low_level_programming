#include "lists.h"
/**
 * listint_len - count all the elements in the lis_t
 * @h: A pointer to singly linked list.
 * Return: counts
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
