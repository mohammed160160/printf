#include <unistd.h>

/**
 * printstring - prints a string
 * @s: A string
 * Return: The number of characters printed
 */
int printstring(char *c)
{
int x = 0;

for (x = 0; c[x] != '\0'; x++)
{
_putchar(c[x]);
}

return(x);
}
