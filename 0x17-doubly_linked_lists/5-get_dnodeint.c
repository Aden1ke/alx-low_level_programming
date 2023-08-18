#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: Pointer to the linked list.
* @index: Index of the node needed.
* Return: Pointer to node, otherwise NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *val = head;
	unsigned int count = 0;

	while (val != NULL)
	{
		if (count == index)
			return (val);
		val = val->next;
		count++;
	}
	return (NULL);
}
