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
int T = 0;
char ch;

while(format != NULL && format[count] != '\0')
{

	if (format[count] == '/' && format[count + 1] != '\0')
	{
	slash(format[count + 1]);
	count += 2;
	T++;
	}

	else
	{
	ch = format[count];
	write(1, &ch, 1);
	count++;
	T++;
	}

}

return (T);
}
