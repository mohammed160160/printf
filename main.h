#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int printstring(char *s);
int _putchar(char c);
int printint(int i);


int (*unsignedselector(char cu))(unsigned int ui);
int printbinary(unsigned int b);
int printunsignedint(unsigned int u);
int printocto(unsigned int o);







#endif
