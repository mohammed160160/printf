#include <unistd.h>
#include "main.h"
/**
 * printrot13 - prints a string encoded with rot13
 * @R: A string
 * Return: The number of characters printed
 */
int printrot13(char *R)
{
int x = 0;

if (R == NULL)
{
write(1, "(null)", 6);
return (6);
}

for (x = 0; R[x] != '\0'; x++)
{

if ((R[x] > 64 && R[x] < 78) || (R[x] > 96 && R[x] < 110))
{
_putchar(R[x] + 13);
}

else if ((R[x] > 77 && R[x] < 91) || (R[x] > 109 && R[x] < 123))
{
_putchar(R[x] - 13);
}

else
{
_putchar(R[x]);
}

}

return (x);
}
