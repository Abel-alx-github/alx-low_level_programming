#include <stdio.h>
#include "lists.h"

/**
*_strlen - return string length
*@s: the string
*Return: int length
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str ? h->str : "(nil)");
			s++;
			h = h->next;
	}

	return (s);
}

