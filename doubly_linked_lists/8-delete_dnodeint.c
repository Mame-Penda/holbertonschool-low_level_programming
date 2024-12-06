#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: the double pointer to the head
 * @index: the index to insert new_node at
 * Return: 1 if it succeeded, -1 if it failed
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}
	if (!temp->next)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
