#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int printstring(char *s);

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





#endif
