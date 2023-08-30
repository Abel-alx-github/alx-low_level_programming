#include "main.h"
/**
**_strncpy - copy a string
*@dest: input value string
*@src: input value
*@n: the number of character to be copied
*Return: returns dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

for (; i <  n; i++)
{
dest[i] = '\0';
}
return (dest);
}
