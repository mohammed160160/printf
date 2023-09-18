#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * call - This function calls the specific format the information should
 * be
 * @special: The specificer following the %
 * @list: the list of arguments
 * Return: how many characters were printed out
 */

int call(char special, va_list list)
{

if (special == 'c') /*In case of %c*/
{
return (_putchar(va_arg(list, int)));
}

else if (special == 'i' || special == 'd') /*In case of %i or %d*/
{
return (printint(va_arg(list, int)));
}

else if (special == 's') /*In case of %s*/
{
return (printstring(va_arg(list, char *)));
}

else if (special == '%')  /*In case of %%*/
{
return (_putchar('%'));
}

else if (special == 'b' || special == 'u' || special == 'o' ||
special == 'x' || special == 'X')
{
return (unsignedselector(special)(va_arg(list, unsigned int)));
}

else /*In case of % followed by non specifiers*/
{
_putchar('%');
_putchar(special);
return (2);
}

return (0);
}
