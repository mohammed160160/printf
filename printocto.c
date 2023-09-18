#include <unistd.h>
#include "main.h"
/**
 * printocto - prints an unsigned octal number
 * @o: The number defined
 * Return: The number of characters printed
 */
int printocto(unsigned int o)
{
int count = 0, digitnum = 0, multi = 1;
unsigned int copy = 0, max = 1;

if (o == 0)
{
_putchar(0 + '0');
return (1);
}

copy = o;

while (o > 0)
{
o = o / 8;
digitnum++;
count++;
}

for (multi = 1; multi < digitnum; multi++)
{
max *= 8;
}

while (max != 0)
{
_putchar(copy / max + '0');
copy = copy % max;
max = max / 8;
}

return (count);
}
