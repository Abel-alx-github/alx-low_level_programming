#include "main.h"
/**
*_strcmp - function that compare to string
*@s1: input value to be compared
*@s2: input value
*Return: returns int
*/
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
{
}

		return (s1[i] - s2[i]);
}
