#include "main.h"
/**
*_islower -check if char is lower case
*Return: 1 if char is lowercase, or 0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
