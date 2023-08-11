#include <unistd.h>
#include <string.h>
/**
*main - entry point
*Description: to print string using write()
*Return: Always 1 (success)
*/
int main(void)
{
const char *abel = "and that piece of art is useful\" - Dora Korpar, 11 2015 - 10 - 19\n";
size_t len = strlen(abel);
write(STDOUT_FILENO, abel, len);
return (1);
}
