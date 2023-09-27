#include <stdio.h>
/**
 *_strspn- gets the length of a prefix substring
 *@s: string where string *accept is searched
 *@accept: string to be searched
 *Return: the number of bytes
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 1; *s != '\0'; s++, i++)
	{
		if (*s == *accept)
			return (i);
	}

	return (0);
}
