#include "lists.h"
/**
*listint_len - return number of node in a list.
*@h: pointer to head
*Return: number of node
*
*/
size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	int node = 0;

	if (h == NULL)
		return (0);
	temp = (void *) h;
	while (temp)
	{
		node++;
		temp = temp->next;
	}
	return (node);
}
