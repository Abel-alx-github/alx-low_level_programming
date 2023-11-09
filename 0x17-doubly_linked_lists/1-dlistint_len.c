#include "lists.h"
/**
*dlistint_len - return no of nodes.
*@h: pointer to first head.
*Return: no of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;
	dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = (void *) h;
	while (temp)
	{
		node += 1;
		temp = temp->next;
	}
	return (node);

}
