#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
int a;
int b;
int c;
int d;

a = _printf("Character:[%c]\n", 'H');
b = printf("Character:[%c]\n", 'H');
c = _printf("String:[%s]\n", "I am a string !");
d = printf("String:[%s]\n", "I am a string !");

printf("%i   %i   %i  %i\n", a, b ,c ,d);
return (0);
}
