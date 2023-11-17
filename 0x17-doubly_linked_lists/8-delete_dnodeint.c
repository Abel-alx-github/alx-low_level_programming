#include "lists.h"
/**
*delete_dnodeint_at_index - delete node at a given indx
*@head: pointer to pointer of head
*@index: where to delete
*Return: returns 1 on success otherwise -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;
	unsigned int count = 0;

	if (!(*head) || !head)
		return (-1);
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
				pop_at_end(head);
			count++;
			del = del->next;
		}
	}
	return (-1);
}
/**
*pop_at_end - delet the end node
*@head: pointer to pointer of head node
*Return: 1 on success
*/
int pop_at_end(dlistint_t **head)
{
	dlistint_t *temp;

	temp = *head;

	while (temp)
		temp = temp->next;
	temp->prev = NULL;
	free(temp);
	return (1);
}
