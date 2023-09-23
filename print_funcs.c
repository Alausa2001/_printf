#include <stddef.h>
#include "main.h"

/* Print single char */
void print_char(va_list arg)
{
  _putchar(va_arg(arg, int));
}


/* print string */
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

