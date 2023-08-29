#include "main.h"
/**
**_strncat -concatenates two strings upto n;
*@dest: strint on which the second string append to
*@src: string that is going to be appended
*@n: number of char to be append to dest
*Return: returns dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, len = 0;
while (dest[len] != '\0')
	{
	len++;
	}

for (i = 0; i < n; i++, len++)
	{
	dest[len] = src[i];
	}
return (dest);

}
