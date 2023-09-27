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

	for (i = 0; s[i] != '\0', i++)
	{
		if (s[i] == *accept)
			return (i);
	}
	if (s[i] == *accept)
		return (i);

	return (0);
}
