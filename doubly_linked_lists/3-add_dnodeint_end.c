#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_end, *temp;

	if (head == NULL)
	return (NULL);
	node_end = malloc(sizeof(dlistint_t));
	if (node_end == NULL)
	return (NULL);
	node_end->n = n;
	if (*head == NULL)
	{
	*head = node_end;
	node_end->next = NULL;
	node_end->prev = NULL;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;
	temp->next = node_end;
	node_end->prev = temp;
	node_end->next = NULL;
	}
	return (node_end);
}
