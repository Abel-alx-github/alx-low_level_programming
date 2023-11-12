#include "lists.h"
/**
*sum_listint - return sum of data in list
*@head: address of first node
*Return: sum of data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
