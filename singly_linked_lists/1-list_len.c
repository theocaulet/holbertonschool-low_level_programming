#include "lists.h"
#include <stdio.h>

/**
 * list_len - number of elements in a linked
 * @h: pointer to the head of the list_t list
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
