#include <unistd.h>
#include "main.h"
/**
 * printstring - prints an int
 * @s: A integer
 * Return: The number of characters printed
 */
int printunsignedint(unsigned int ui)
{
int count = 0, digitnum = 0, tenmult = 1;
unsigned int copy = 0, number = 0, tens = 1;

if (ui == 0)
{
_putchar(0 + '0');
return(1);
}

copy = number;

while(copy>0)
{
copy = copy/10;
digitnum++;
count++;
}
for (tenmult = 1;tenmult < digitnum;tenmult++)
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
