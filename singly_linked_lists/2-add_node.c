#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node = malloc(sizeof(list_t));

	if (add_node == NULL)
	{
	return (NULL);
	}
	add_node->str = strdup(str);
	if (add_node->str == NULL)
	{
	return (NULL);
	}
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
