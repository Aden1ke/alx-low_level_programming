#include "lists.h"
/**
 * *add_nodeint - add node to the begining of a linked list.
 * @head: head of the linked list.
 * @n: num to be copied in the list.
 * Return: number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("error");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
