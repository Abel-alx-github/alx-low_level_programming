#include <stdio.h>
/**
*main - print both capital and small letter
*Return: always 0 (success)
*/
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
