#include "main.h"
/**
**leet - function thta encode
*@ch: input value
*Return: returnc encoded ch
*
*/
char *leet(char *ch)

{
char str1[] = "aAeEoOtTlL";
char str2[] = "4433007711";
int a, b;
for (a = 0; ch[a] != '\0'; a++)
	{
	for (b = 0; b < 10; b++)
		{
		if (ch[a] == str1[b])
		ch[a] = str2[b];
		}
	}
return (ch);

}
