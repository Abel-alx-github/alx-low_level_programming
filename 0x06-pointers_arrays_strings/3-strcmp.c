#include "main.h"
/**
*_strcmp - function that compare to string
*@s1: input value to be compared
*@s2: input value
*Return: returns int
*/
int _strcmp(char *s1, char *s2)
{
int i, eq = 0;
for (i = 0; s1[i] != '\0' && s2[i] && '\0'; i++)
{
	if (s1[i] == s2[i])
	{
	return (eq);
	}
}
return (s1[i] - s2[i]);
}
