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
char ch;

va_start(list, format);

while(format != NULL && format[count] != '\0')
{
if (format[count] != '\0')
ch = format[count];
write(1, &ch, 1);
count++;
T++;
}

va_end(list);

return (T);
}
