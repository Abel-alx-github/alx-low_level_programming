#include <stdio.h>

/**
 *_memset- fills memory with a condtant byte
 *@s: pointer to string
 *@b: char to be filled
 *@n: number of constant value to be filled
 *Return: pointer to char (s)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
