#include "lists.h"
/**
 * list_len - the number of elements in a linked list_t list
 * @h: head of linked list
 * Return: number of size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
