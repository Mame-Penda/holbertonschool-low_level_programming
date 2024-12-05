#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *  @head: the double pointer to the heaad
 *  @n: the number to add
 *
 *  Return:  the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp_node;

new_node = malloc(sizeof(dlistint_t));
if (!new_node || !head)
return (NULL);

new_node->n = n;
new_node->next = NULL;
temp_node = *head;
if (temp_node)
{
	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
