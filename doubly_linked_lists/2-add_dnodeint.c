#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint -  adds a new node at the end of a dlistint_t list.
 * @head: the head of doubly linked list
 *@n: the data to add into new_node
 * Return: the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (*head != NULL)
	{
		(*head)->prev = new_node;

		*head = new_node;
	}
	return (new_node);
}
