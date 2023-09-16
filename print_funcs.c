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
