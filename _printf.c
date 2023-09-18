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

while (format[co] != '\0')
{
if (format[co] == '%')
{
count++;
	if (format[co] == 'c') /*In case of %c*/
	{ T += _putchar(va_arg(list, int)); }
	else if (format[co] == 's') /*In case of %s*/
	{ T += printstring(va_arg(list, char *)); }
	else if (format[co] == '%')  /*In case of %%*/
	{ T += _putchar('%'); }
	else if (format[co] == 'i' || format[count] == 'd') /*In case of %i*/
	{ T += printint(va_arg(list, int)); }
	else if (format[co] == '\0') /*In case of %'\0'*/
	{ return (-1); }
	else /*In case of % followed by non specifiers*/
	{ T += _putchar(format[co - 1]);
	T += _putchar(format[co]); }
	count++;
}
	else /*In case of non specifiers*/
	{ T += _putchar(format[count]);
	count++; }
}
va_end(list);
return (T);
}

