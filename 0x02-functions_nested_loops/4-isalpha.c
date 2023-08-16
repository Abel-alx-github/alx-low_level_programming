#include "main.h"
/**
*_isalpha -checks for alphabet charcter
*@c: the charcter to be checked
*Return: 1 if c is a letter, or 0 if not
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
