#include "lists.h"
/**
*free_listint2 - frees list
*@head: pointer to pointer of head
*
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
		temp = NULL;
	}
	(*head) = NULL;
}

