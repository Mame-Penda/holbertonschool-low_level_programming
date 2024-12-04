#include "lists.h"
#include <string.h>
/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head: pointer to a list_t t.
 * @str: the string to point
 *
 * Return: the addree of the new element,or Null if it failled
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node || !str)
		return (NULL);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
		i++;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
