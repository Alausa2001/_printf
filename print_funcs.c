#include <stddef.h>
#include "main.h"



/**
 * print_char: Handles printf c specifier
 *
 */

void print_char(va_list arg)
{
  _putchar(va_arg(arg, int));
}



/**
 * print_str: Handles printf s specifier
 *
 */

void print_str(va_list arg)
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
 * print_int: Handles printf d specifier
 *
 */

void print_int(va_list arg) {
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

  char buffer[20]; 
  int i = 0;

  
  while (n > 0) {
    int digit = n % 10;
    buffer[i++] = '0' + digit;
    n /= 10;
  }

 
  if (is_negative) {
    _putchar('-');
  }

  
  while (i > 0) {
    _putchar(buffer[--i]);
  }
}


/**
 * print_bin: b specifier, gives binary of an integer
 */

void print_bin(va_list arg)
{
  int dec = va_arg(arg, int);
  char bin[50];
  int idx = 0;
  int rem;

  if (dec == 0)
    _putchar('0');

  if (dec < 0)
    _putchar('-');


  for (; dec > 0; idx++) {

    bin[idx] = dec % 2;
    dec /= 2;
  }
  bin[idx++] = dec;
  
  while (idx > 0)
    _putchar(bin[--idx] + '0');
}
