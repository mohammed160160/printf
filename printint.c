#include <unistd.h>
#include "main.h"
/**
 * printint - prints an int
 * @i: A integer
 * Return: The number of characters printed
 */
int printint(int i)
{
int count = 0, digitnum = 0, tens = 1, tenmult = 1;
unsigned int copy = 0, number = 0;

if (i == 0)
{
_putchar(0 + '0');
return (1);
}

if (i < 0)
{
_putchar('-');
number = -i;
count++;
}
else
{ number = i; }

copy = number;

while (copy > 0)
{
copy = copy / 10;
digitnum++;
count++;
}
for (tenmult = 1; tenmult < digitnum; tenmult++)
{
tens *= 10;
}
	while (tens != 0)
	{
	_putchar(number / tens + '0');
	number = number % tens;
	tens = tens / 10;
	}
return (count);
}
