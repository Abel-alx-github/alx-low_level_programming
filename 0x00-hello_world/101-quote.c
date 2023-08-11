#include <unistd.h>
#include <string.h>
/**
*main - entry point
*Description: to print string using write()
*Return: Always 1 (success)
*/
int main(void)
{
const char *a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t len = strlen(a);
write(STDOUT_FILENO, a, len);
return (1);
}
