#include "lists.h"
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the double pointer to the head
 * @idx: the index to insert new code at
 * @n: the data to add to new code
 * Return: the address of the new node, or NULL if it failed
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (i < idx - 1)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	prev_node->next->prev = new_node;
	prev_node->next = new_node;
	return (new_node);
}
