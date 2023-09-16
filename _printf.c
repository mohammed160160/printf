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

int count = 0, T = 0;
va_list list;

va_start(list, format);
while (format != NULL && format[count] != '\0')
{
if (format[count] == '%')
{
	count++;
	if (format[count] == 'c') /*In case of %c*/
	{ T += _putchar(va_arg(list, int)); }
	else if (format[count] == 's') /*In case of %s*/
	{ T += printstring(va_arg(list, char *)); }
	else if (format[count] == '%')  /*In case of %%*/
	{ T += _putchar('%'); }
	else if (format[count] == 'i') /*In case of %i*/
	{ T += printint(va_arg(list, int)); }
	else if (format[count] == 'd') /*In case of %d*/
	{ T += printdecimal(va_arg(list, int)); }
	count++;
}
	else
	{ T += _putchar(format[count]);
	count++; }
}
va_end(list);
return (T);
}

