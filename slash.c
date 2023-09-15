#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

void slash (char c)
{
char x;

switch (c)
{

case('n'):
x = '\n';
write (1, &x, 1);
break;

case('b'):
x = '\b';
write (1, &x, 1);
break;

default:
write (1, &c, 1);
break;
}

}
