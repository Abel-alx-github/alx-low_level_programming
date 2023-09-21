#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp, *next_node;

	if (!head)
		return;
	temp = head;
	while (temp)
	{
		next_node = temp->next;
		free(temp->str);
		free(temp);
		temp = next_node;
	}
}

