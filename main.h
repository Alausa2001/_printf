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
int print_num(int num);
int print_base(int num, int base);
int printhex(int num, char specifier);

/* print functions (based on specifier) */
void c_specifier(va_list arg);
void s_specifier(va_list arg);
void d_specifier(va_list arg);
void b_specifier(va_list arg);
void u_specifier(va_list arg);
void o_specifier(va_list arg);
void X_specifier(va_list arg);
void x_specifier(va_list arg);

/* custom printf */
int _printf(const char *format, ...);

#endif
