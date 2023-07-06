#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 * (count)
 */
size_t print_listint_safe(const listint_t *head)
{
        const listint_t *slow, *fast;
        size_t count = 0;

        if (head == NULL)
	{
                exit(98);
	}
        slow = head;
        fast = head;
        while (slow != NULL && fast != NULL && fast->next != NULL)
        {
                count++;
                printf("[%p] %d\n", (void *)slow->next, slow->n);
                slow = slow->next;
                fast = fast->next;
                if (slow == fast)
                {
                        break;
                }
        }
        return (count);
}
