#include "lists.h"
#include <string.h>
/**
 * add_node - a function that adds a node to the head of linked list
 * @head: pointer to a list_t
 * @str: pointer to string that adds as node
 *
 * Return: pointer to new head of list, NULL or Failure
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));

			if (new_node == NULL)
			return (NULL);

			while (str[i])
			i++;

			new_node->len = i;
			new_node->str = strdup(str);
			new_node->next = *head;
			* head = new_node;
			return (new_node);
			}
