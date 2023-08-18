#include "lists.h"
/**
 * *insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @n: linked list.
 * @h: pointer to the first node
 * @idx: is the index of the list where the new node should be added.
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *tmp;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
