#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
	int count = 0;
	 if (s == NULL)
		 return (0);
	 else
		while (*s != '\0')
		{
			count++;
			s++;
		}
	return (count);
}
