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
	dlistint_t *temp_1, *new = NULL;
	unsigned int i;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		i = 1;
		temp_1 = *h;
		while (temp_1)
		{
			if (idx == i)
			{
				if (temp_1->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = temp_1->next;
						new->prev = temp_1;
						temp_1->next->prev = new;
						temp_1->next = new;
					}
				}
				break;
			}
			i++;
			temp_1 = temp_1->next;
		}
	}
	return (new);
}
