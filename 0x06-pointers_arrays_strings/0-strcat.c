#include "main.h"
/**
 **_strcat -  concatenates two strings
 *@dest: string on which other string append to
 *@src: string to be addede
 *Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
int i, len = 0;
for (len = 0; dest[len] != '\0'; len++)
{}
for (i = 0; src[i] != '\0'; i++, len++)
	{
	dest[len] = src[i];
	}
return (dest);
}
