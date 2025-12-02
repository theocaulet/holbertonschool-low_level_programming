#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node_end, *temp;
	int count = 0;
	const char *ptr;

	if (head == NULL || str == NULL)
	return (NULL);
	add_node_end = malloc(sizeof(list_t));
	if (add_node_end == NULL)
	return (NULL);
	add_node_end->str = strdup(str);
	if (add_node_end->str == NULL)
	{
	free(add_node_end);
	return (NULL);
	}
	for (ptr = str; *ptr != '\0'; ptr++)
	count++;
	add_node_end->len = count;
	add_node_end->next = NULL;
	if (*head == NULL)
	{
	*head = add_node_end;
	return (add_node_end);
	}
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;
	temp->next = add_node_end;
	return (add_node_end);
}

