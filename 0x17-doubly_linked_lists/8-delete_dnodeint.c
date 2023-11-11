#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (0);
	while (del)
	{
		del = del->next;
		count++;
	}
	if (index > count)
		return (-1);
	if (index == 0)
	{	del = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(del);
		return (1);
	}
	else
	{
		count = 0;
		del = *head;
		while (del)
		{
			if (count == index && del->next)
			{
				del->prev->next = del->next;
				del->next->prev = del->prev;
				free(del);
				return (1);
			}
			else if (count == index && del->next == NULL)
			{
				del->prev->next = NULL;
				free(del);
				return (1);
			}
			count++;
			del = del->next;
			
		}
	}
	return (-1);
}
