#include "lists.h"
/**
*sum_dlistint - return sum of each node in the list.
*@head: pointer to first node in a list
*Return: sum
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tamp;

	if (head == NULL)
		return (0);
	tamp = head;
	while (tamp)
	{
		sum += tamp->n;
		tamp = tamp->next;
	}
	return (sum);

}
