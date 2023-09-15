#include <unistd.h>
#include "main.h"
/**
 * printstring - prints a string
 * @s: A string
 * Return: The number of characters printed
 */
int printstring(char *s)
{
int x = 0;

for (x = 0; s[x] != '\0'; x++)
{
_putchar(s[x]);
}

return(x);
}
