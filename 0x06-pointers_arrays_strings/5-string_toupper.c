#include "main.h"
/**
**string_toupper - function that convert lower case to upper
*@ch: input string
*Return: returns converted char ch
*
*/
char *string_toupper(char *ch)
{
int i = 0;
for (i = 0; ch[i] != '\0'; i++)
	{
	if (ch[i] >= 'a' && ch[i] <= 'z')
		{
		ch[i] = ch[i] - 32;
		}

	}
return (ch);
}

