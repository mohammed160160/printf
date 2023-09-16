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
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				putchar(va_arg(args, int));
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				for (; *s; s++)
				{
					putchar(*s);
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

