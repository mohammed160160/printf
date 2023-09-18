#include <unistd.h>
#include "main.h"
/**
 * printbinary - prints an unsigned binary number
 * @b: The number defined
 * Return: The number of characters printed
 */
int printbinary(unsigned int b)
{
int count = 0, digitnum = 0, multi = 1;
unsigned int copy = 0, max = 1;

if (b == 0)
{
_putchar(0 + '0');
return (1);
}

copy = b;

while (b > 0)
{
b = b / 2;
digitnum++;
count++;
}

for (multi = 1; multi < digitnum; multi++)
{
max *= 2;
}

while (max != 0)
{
_putchar(copy / max + '0');
copy = copy % max;
max = max / 2;
}

return (count);
}
