#include "lists.h"
#include <stdio.h>
/**
* list_len - finds the number of elements in a linked list
* @h: ponter to list
*
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
