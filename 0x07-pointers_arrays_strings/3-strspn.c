#include <stdio.h>
#include "main.h"
/**
 *_strspn- gets the length of a prefix substring
 *@s: string where string *accept is searched
 *@accept: string to be searched
 *Return: the number of bytes
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i = 0;

		for (; *s != '\0'; s++)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (*s == accept[j])
				{	i++;
					break;
				}
				else if (accept[j + 1] == '\0')
					return (i);
			}
		}

	return (i);
}
