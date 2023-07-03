#include "lists.h"
/**
 * add_node - add node to the begining of a linked list.
 * @head: head of the linked list.
 * @str: string to be copied in the list.
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
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
