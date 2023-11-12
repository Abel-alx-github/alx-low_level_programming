#include "lists.h"
/**
*free_listint - frees list
*@head: pointer to head of list
*
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
