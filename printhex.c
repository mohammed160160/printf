#include <unistd.h>
#include "main.h"
/**
 * printhex - prints an unsigned hexadecimal number in small letters
 * @h: The number defined
 * Return: The number of characters printed
 */
int printhex(unsigned int h)
{
int count = 0, digitnum = 0, multi = 1;
unsigned int copy = 0, max = 1;

if (h == 0)
{
_putchar(0 + '0');
return (1);
}

copy = h;

while (h > 0)
{
h = h / 16;
digitnum++;
count++;
}

for (multi = 1; multi < digitnum; multi++)
{
max *= 16;
}

while (max != 0)
{


if (copy / max >= 10)
{ _putchar(87 + (copy / max)); }
else
{ _putchar(copy / max + '0'); }

copy = copy % max;
max = max / 16;
}

return (count);
}
