#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_dnodeint = malloc(sizeof(dlistint_t));

	if (add_dnodeint == NULL)
	return (NULL);
	add_dnodeint->n = n;
	add_dnodeint->next = *head;
	add_dnodeint->prev = NULL;
	if (*head != NULL)
	(*head)->prev = add_dnodeint;
	*head = add_dnodeint;
	return (add_dnodeint);
}

