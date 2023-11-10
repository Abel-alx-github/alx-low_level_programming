#include "lists.h"
/**
*get_dnodeint_at_index - return node at a given index.
*@head: pointer to first node
*@index: index of node to be looked at
*Return: pointer to node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count += 1;
	}
	return (NULL);

}
