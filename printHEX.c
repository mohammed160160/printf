#include <unistd.h>
#include "main.h"
/**
 * printHEX - prints an unsigned hexadecimal number in capital letters
 * @H: The number defined
 * Return: The number of characters printed
 */
int printHEX(unsigned int H)
{
int count = 0, digitnum = 0, multi = 1;
unsigned int copy = 0, max = 1;

if (H == 0)
{
_putchar(0 + '0');
return (1);
}

copy = H;

while (H > 0)
{
H = H / 16;
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
{ _putchar(55 + (copy / max)); }
else
{ _putchar(copy / max + '0'); }

copy = copy % max;
max = max / 16;
}

return (count);
}
