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
	listint_t *temp;
	int node = 0;

	if (head == NULL)
		exit(98);

	temp = head;
	while (temp)
	{
		node++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (node);
}
