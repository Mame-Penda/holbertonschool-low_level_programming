#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list.
 * @head: the double pointer to a lists
 * Return: void if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
		head = head->prev;
	}
	return (sum);
}
