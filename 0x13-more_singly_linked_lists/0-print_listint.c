#include "lists.h"
/**
*print_listint - print data of list.
*@h: pointer to list's head
*Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n",h->n);
		node++;
		h = h->next;
	}
	return (node);
}
