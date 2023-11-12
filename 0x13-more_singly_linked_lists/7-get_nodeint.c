#include "lists.h"
/**
*get_nodeint_at_index - return node at index
*@head: pointer to head of list
*@index: index of node to look for
*Return: node at index
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
	}
	return (NULL);
}
