#include <stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: character to be located
 *Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; s++, i++)
	{
		if (*s == c)
			break;
	}

	if (*s == '\0')
		s = NULL;

	return (s);
}
