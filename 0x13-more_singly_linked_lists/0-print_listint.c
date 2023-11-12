#include "lists.h"
/**
*print_listint - print data of list.
*@h: pointer to list's head
*Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	int node = 0;

	if (h == NULL)
		return (0);
	temp = (void *)h;
	while (temp)
	{
		node++;
		printf("%d\n", temp->n);
		temp = temp->next;

	}
	return (node);

}
