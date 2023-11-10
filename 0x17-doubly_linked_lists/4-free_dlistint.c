#include "lists.h"
/**
*free_dlistint - frees the alloc'd memory.
*@head: pointer to head of list
*
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
