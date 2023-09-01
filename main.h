#ifndef __MAIN__
#define __MAIN__

#include <stdarg.h>


typedef struct func {
  char *specifier;
  void (*print_func)(va_list);
} func_t;

/* helper funcs */
int _putchar(char c);
int _strlen(char *s);

/* print functions (based on specifier) */
void print_char(va_list arg);
void print_str(va_list arg);

/* custom printf */
int _printf(const char *format, ...);

#endif
