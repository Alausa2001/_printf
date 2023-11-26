#include <stdio.h>
#include <stdint.h>
#include "main.h"


/**
 * u_specifer: works like standard printf %u
 *
 * note: havent been able to handle if a -ve interger is passed to %u
 */


void u_specifier(va_list arg)
{
  int n = va_arg(arg, int);

  if (n == 0)
    _putchar(48);
  else if (n >= 1 && n <= 9) 
    _putchar(n + 48);
  else if (n > 9)
    print_num(n);
  else
    print_num(42);
}


/**
 * o_specifier: works like standard printf %o
 *
 * %o printf specifier for printing an unsigned integer in octal format
 */

void o_specifier(va_list arg)
{
  int n = va_arg(arg, int);

  if (n <= 0)
    _putchar(48);
  print_base(n, 8);
}


/**
 * x_specifier: works like standard printf %x
 *
 * %x formats unsigned integer in hexadecimal format
 * 10, 11, 12 ... are a, b, c ... respectively
 */

void x_specifier(va_list arg)
{
  int n = va_arg(arg, int);
  
  if (n <= 0)
   _putchar(48);

 printhex(n, 'x'); 
}


/**
 * X_specifier: works like standard printf %X
 *
 * %X formats unsigned integer in hexadecimal format
 * 10, 11, 12 ... are A, B, C ... respectively
 */

void X_specifier(va_list arg)
{
  int n = va_arg(arg, int);
  
  if (n <= 0)
   _putchar(48);

 printhex(n, 'X'); 
}
