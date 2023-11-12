#include "lists.h"
/**
*print_listint - print data of list.
*@h: pointer to list's head
*Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	int node = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;

	}
	return (node);

}
