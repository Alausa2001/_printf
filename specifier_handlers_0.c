#include <stddef.h>
#include "main.h"



/**
 *  c_specifier: Handles printf c specifier
 *
 */

void c_specifier(va_list arg)
{
  _putchar(va_arg(arg, int));
}



/**
 *  s_specifier: Handles printf s specifier
 *
 */

void s_specifier(va_list arg)
{
  char *s = va_arg(arg, char*);
  int len;
  
  
  len = _strlen(s);
  for (int i = 0; i < len; i++)
  {
    _putchar(s[i]);
  }
}



/**
 *  d_specifier: Handles printf d specifier
 *
 */

void d_specifier(va_list arg) {
  int n = va_arg(arg, int);
  int is_negative = 0;

  if (n < 0) {
    is_negative = 1;
    n *= -1;
  }

  if (n == 0) {
    _putchar('0');
    return;
  }

  if (is_negative)
  {
    _putchar('-');
  }
  print_base(n, 10);
}


/**
 *  b_specifier: b specifier, gives binary of an integer
 */

void b_specifier(va_list arg)
{
  int dec = va_arg(arg, int);
  char bin[50];
  int idx = 0;
  int rem;

  if (dec == 0)
    _putchar('0');

  if (dec < 0)
  {
    dec *= -1;
    _putchar('-');
  }
  print_base(dec, 2);
}
