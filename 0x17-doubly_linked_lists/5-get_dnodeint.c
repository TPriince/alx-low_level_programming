#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the nth node
 *
 * Return: the address of the node, or if it does not exist return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			break;
		}
		head = head->next;
		i++;
	}

	return (head);
}
