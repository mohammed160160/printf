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
while(format != NULL && format[count] != '\0')
{
if (format[count] == '%')
{
	count++;
	switch(format[count])
	{
	case('c'):
	T += _putchar(va_arg(list, int));
	count++;
	break;
	case('s'):
	T += printstring(va_arg(list, char *));
	count++;
	break;
	}
}
		else
		{
		T += _putchar(format[count]);
		count++;
		}
}
va_end(list);
return (T);
}
