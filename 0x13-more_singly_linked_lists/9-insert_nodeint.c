#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: double pointer to the head of the listint list
* @idx: is the index of the list where the new node should be added
* @n: is the data
* Return: Null if it failed or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *headaux;
	listint_t *newnode;
	unsigned int size;

	size = 0;	

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; aux; ++i)
	{
		if (i == idx - 1)
		{
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		aux = aux->next;
	}
	free(new);
	return (NULL);
insert_nodeint_at_index - inserts a new node at a given position}
}
