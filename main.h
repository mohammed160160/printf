#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

int (*stringselector(char cs))(char *);
int printstring(char *s);
int printprintable(char *p);
int printrev(char *r);

/*To deal with %d %i and %c*/
int _putchar(char c);
int printint(int i);

/*To deal with binary/hexadecimal/decimal/octal forms of unsigned*/
int (*unsignedselector(char cu))(unsigned int ui);
int printbinary(unsigned int b);
int printunsignedint(unsigned int u);
int printocto(unsigned int o);
int printhex(unsigned int h);
int printHEX(unsigned int H);

int call(char special, va_list list);



#endif
