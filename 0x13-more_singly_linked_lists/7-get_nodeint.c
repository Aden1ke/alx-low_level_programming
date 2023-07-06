#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node to return
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}
	if (count != index)
	{
		return (NULL);
	}
	return (tmp);
}
