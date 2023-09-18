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

if (format == NULL) /*If format is NULL it should return -1*/
{
return (-1);
}

va_start(list, format); /*starts the va pointer from 0*/

for (co = 0; format[co] != '\0'; co++) /*a loop to print out*/
{

	if (format[co] == '%') /**If the current value is %**/
	{
	co++;
		if (format[co] == '\0') /*In case of %'\0'*/
		{
		return (-1);
		}

			else
			{
			T += call(format[co], list);
			}
	}

else /*In case of non specifiers*/
{
T += _putchar(format[co]);
}

}
va_end(list);
return (T);
}
