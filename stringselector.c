#include <unistd.h>
#include "main.h"
/**
 * stringselector - selects which form the string should be printed as
 * @cs: The form in question
 * Return: The number of characters printed
 */
int (*stringselector(char cs))(char *)
{

if (cs == 's')
{
return (printstring);
}

if (cs == 'S')
{
return (printprintable);
}

if (cs == 'r')
{
return (printrev);
}

if (cs == 'R')
{
return (printrot13);
}

return (0);
}
