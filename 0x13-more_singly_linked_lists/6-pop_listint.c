#include "lists.h"
/**
*pop_listint - return top node
*@head: head of list
*Return: int of head node
*
*
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	data = temp->n;
	free(temp);
	return (data);
}
