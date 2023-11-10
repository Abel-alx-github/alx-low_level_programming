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
	dlistint_t *temp_2, *temp_1, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp_1 = *h;
	while (idx - 1 > 0)
	{
		temp_1 = temp_1->next;
		idx--;
	}
	if (temp_1->next == NULL)
	{
		temp_1->next = new;
		new->prev = temp_1;
	}
	else
	{
		temp_2 = temp_1->next;
		temp_1->next = new;
		temp_2->prev = new;
		new->next = temp_2;
		new->prev = temp_1;
	}
	return (new);
}
