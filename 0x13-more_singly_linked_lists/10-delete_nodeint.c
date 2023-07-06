#include "lists.h"
/**
 * delete_nodeint_at_index - add a new node at the end of a listint_t list.
 *@index:  node.
 *@head: pointer to pointer of the first node.
 * Return: the address of the new element.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *before_node, *tmp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	before_node = *head;
	tmp = before_node->next;
	for (i = 0; i < index && tmp != NULL; i++)
	{
		before_node = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (-1);
	}
	before_node->next = tmp->next;
	free(tmp);
	return (1);
}
