#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string where matches for string accept is searched
 *@accept: string to be searched
 *Return: a pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)

{
	int i, j;

	for (i = 0; *s++ != '\0'; i++)
	{
		for (j = 0; *accept++; j++)
			if (*s == *accept)
				return (s);

	}
	return (NULL);
}
