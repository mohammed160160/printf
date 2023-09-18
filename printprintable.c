#include <unistd.h>
#include "main.h"
/**
 * printprintable - prints any printable values in a string (any unprintable
 * value should be \x followed by their ascii value in 2 digits.
 * @p: A string
 * Return: The number of characters printed
 */
int printprintable(char *p)
{
int x = 0;
int printed = 0;

if (p == NULL)
{
_putchar(92);
_putchar('x');
_putchar('0');
_putchar('0');
return (4);
}

for (x = 0; p[x] != '\0'; x++)
{
if (p[x] < 32 || p[x] >= 127)
{
_putchar(92);
_putchar('x');

if (p[x] / 16 >= 10)
{ _putchar(55 + (p[x] / 16)); }
else
{ _putchar(p[x] / 16 + '0'); }

if (p[x] % 16 >= 10)
{ _putchar(55 + (p[x] % 16)); }
else
{ _putchar(p[x] % 16 + '0'); }
printed += 4;
}

else
{
_putchar(p[x]);
printed++;
}

}
return (printed);
}
