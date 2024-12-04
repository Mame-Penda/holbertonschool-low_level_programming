#include "lists.h"
#include <string.h>
/**
 * free_list - a function that frees all elements in a linked list
 * @head: pointer to head element list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (head)
	{
		temp = head;
		head = head->next,
		     free(temp->str);
		free(temp);
	}
	free(head);
}
