#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth, *current;
	unsigned int count;
	current = head;
	count = 0;

	while (current != NULL)
	if (count == index)
	{
	nth = current;
	return (nth);
	}
	else
	{
	current = current->next;
	count++;
	}
	return (NULL);
}
