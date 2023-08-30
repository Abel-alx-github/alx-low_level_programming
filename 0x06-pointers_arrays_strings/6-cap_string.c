#include "main.h"
/**
**cap_string -function that capitalize a word
*@ch: in put string
*Return: returns ch;
*
*/
char *cap_string(char *ch)
{
int i;
for (i = 0; ch[i] != '\0'; i++)
{
if ((ch[i] >= 'a' && ch[i] <=  'z') &&
(ch[i - 1] == ',' ||
ch[i - 1] == ';' ||
ch[i - 1] == '.' ||
ch[i - 1] == '!' ||
ch[i - 1] == '?' ||
ch[i - 1] == '"' ||
ch[i - 1] == '(' ||
ch[i - 1] == ')' ||
ch[i - 1] == '{' ||
ch[i - 1] == '}' ||
ch[i - 1] == '\n' ||
ch[i - 1] == '\t' ||
ch[i - 1] == ' ' ||
ch[i] == '0'))
{
ch[i] = ch[i] - 32;
}
}
return (ch);
}

