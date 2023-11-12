#include "lists.h"
/**
*add_nodeint - add node at first index
*@head: pointer to pointer of first node
*@n: data int
*Return: address of newly alloc'd node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (head)
	{
		new->next = (*head);
		*head = new;
	}
	return (new);

}
