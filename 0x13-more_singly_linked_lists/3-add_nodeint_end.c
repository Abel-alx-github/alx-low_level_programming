#include "lists.h"
/**
*add_nodeint_end - add node at end of list.
*@head: pointer of pointer to head
*@n: int data
*Return newly added node address
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		(*head) = new;
	else if (head)
	{
		temp = *head;
		while (temp)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
