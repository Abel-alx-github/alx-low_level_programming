#include "lists.h"
/**
*insert_dnodeint_at_index - inser node at idx node
*@h: pointer tp pointer of the first node.
*@n: int data to be added.
*@idx: indix where node to insert.
*Return: pointer to a newly added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node_count = 0;
	dlistint_t *back, *first, *new;

	if ((*h) == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if ((*h)->next == NULL && idx == node_count)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		back = *h;
		while (back->next)
		{
			first = back->next;
			if (idx == node_count + 1)
			{
				new->prev = back;
				new->next = first;
				first->prev = new;
				back->next = new;
				break;
			}
			node_count += 1;
			back = first;
		}
	}
	if (idx > node_count)
		return (NULL);
	return (new);
}
