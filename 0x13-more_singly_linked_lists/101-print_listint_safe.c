#include "lists.h"
/**
*print_listint_safe - print data of list
*@head: pointer to first node
*Return: size of node
*
*
*/
size_t print_listint_safe(const listint_t *head)
{
	int node = 0;

	if (head == NULL)
		exit(98);

	while (head)
	{
		node++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (node);
}
