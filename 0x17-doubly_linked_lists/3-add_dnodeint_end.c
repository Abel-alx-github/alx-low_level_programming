#include "lists.h"
/**
*add_dnodeint_end - function that add node at the end of lish.
*@head: pointer to pointer of the first head
*@n: int data to be added.
*Return: address of added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if ((*head) == NULL)
	{
		*head = new;
		new = (*head)->next;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
		temp = new->next;
		new = temp;
	}
	if (new)
	{
		free(new);
	}
	return (*head);

}
