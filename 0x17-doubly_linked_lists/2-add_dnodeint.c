#include "lists.h"
/**
*add_dnodeint - insert node at head first node
*@head: pointer to first node.
*@n: int data to be added at start of list
*Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		temp = new;
		*head = temp;
	}
	else
	{
		temp->prev = new;
		new->next = temp;
		temp = new;
		*head = temp;
	}
	return (*head);
}
