#include "lists.h"
/**
 * *add_dnodeint - add node to the begining of a linked list.
 * @head: head of the linked list.
 * @n: value to be copied in the list.
 * Return: number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
