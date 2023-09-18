#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function with the same behavior as printf
 * @format: The string send to this function to print
 * @...: Any other arguments
 * Return: how many characters were printed out
 */

int _printf(const char *format, ...)
{

int co = 0, T = 0;
va_list list;

if (format == NULL)
{ return (-1); }

va_start(list, format);
for (co = 0; format[co] != '\0'; co++)
{
	if (format[co] == '%')
	{
	co++;

	if (format[co] == '\0') /*In case of %'\0'*/
	{ return (-1); }
else if (format[co] == 'c') /*In case of %c*/
{ T += _putchar(va_arg(list, int)); }
	else if (format[co] == 'i' || format[co] == 'd') /*In case of %i or %d*/
	{ T += printint(va_arg(list, int)); }
else if (format[co] == 's') /*In case of %s*/
{ T += printstring(va_arg(list, char *)); }
	else if (format[co] == '%')  /*In case of %%*/
	{ T += _putchar('%'); }
else if (format[co] == 'b' || format[co] == 'u' || format[co] == 'o' ||
format[co] == 'x' || format[co] == 'X')
{ T += unsignedselector(format[co])(va_arg(list, unsigned int)); }
	else /*In case of % followed by non specifiers*/
	{ T += _putchar(format[co - 1]);
	T += _putchar(format[co]); }
}

else /*In case of non specifiers*/
{ T += _putchar(format[co]); }
}
va_end(list);
return (T);
}
