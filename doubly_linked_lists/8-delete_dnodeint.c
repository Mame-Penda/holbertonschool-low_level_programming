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
	dlistint_t *temp = *head;
	unsigned int i = 0;

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
	while (i < index)

	{
		if (!temp)
			return (-1);
		temp = temp->next;
		i++;
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
