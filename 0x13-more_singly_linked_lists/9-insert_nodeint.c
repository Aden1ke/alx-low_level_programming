#include "lists.h"
/**
 * *insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @n: linked list.
 * @head: pointer to the first node
 * @idx: is the index of the list where the new node should be added.
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
