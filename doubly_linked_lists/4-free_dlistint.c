#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head pointer to lists elements
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


