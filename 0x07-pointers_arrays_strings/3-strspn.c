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
	unsigned int i = 0;

		for (; *s++ != '\0';)
		{
			for (; *accept++ != '\0'; )
			{
				if (*s == *accept)
					i = 1;
					break;
				else if (*++accept == '\0')
					return (i);
			}
		}

	return (i);
}
