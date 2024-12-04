#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t
 * @h: head of doubly linked list
 *
 * return: the number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
