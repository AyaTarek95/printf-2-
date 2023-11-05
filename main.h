#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
int (*get_func(char x))(va_list args);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);

typedef struct functions
{
	char *valid;
	int (*f) (va_list);
}functions;

#endif
