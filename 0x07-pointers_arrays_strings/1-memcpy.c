#include <stdio.h>

/**
 *_memcpy - copies memory area of src to dest
 *@dest: destination pointer where strings are stored
 *@src: source of char
 *@n: number of char to be copied
 *Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
