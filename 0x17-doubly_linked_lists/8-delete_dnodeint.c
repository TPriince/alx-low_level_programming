#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}

/**
 * delete_dnodeint_at_index - deletes the node at an index
 * of a doubly linked list
 * @head: double pointer to the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temp) < index + 1)
	{
		return (-1);
	}

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}