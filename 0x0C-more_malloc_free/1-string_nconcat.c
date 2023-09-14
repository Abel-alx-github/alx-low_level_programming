#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - concatnet n length of s2 string onto s1
*@s1: input string
*@s2: string to be added on to s1
*@n: length of string to be cocatneted
*Return: pointer new
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j;
	unsigned int len = 0;

	for ( ; s1[len] != '\0'; len++)
		{}

	new = malloc(len + 1 + n);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		new[i] = s2[j];
	if (new[i] != '\0')
	new[i] = '\0';
	return (new);


}
