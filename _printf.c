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
			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(args, int);

					putchar(c);
					count++;
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);

					while (*s)
					{
						putchar(*s);
						s++;
						count++;
					}
					break;
				}
				case '%':
				{
					putchar('%');
					count++;
					break;
				}
				default:
				break;
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

