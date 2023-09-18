#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * printrev - prints a string in reverse
 * @r: A string
 * Return: The number of characters printed
 */
int printrev(char *r)
{
int x = 0;
int length = 0;

if (r == NULL)
{
write(1, "(null)", 6);
return (6);
}

length = strlen(r);

for (x = length ; r[x - 1] != '\0'; x--)
{
_putchar(r[x - 1]);
}

return (length);
}
