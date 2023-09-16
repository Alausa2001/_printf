#include <stddef.h>
#include "main.h"



int _printf(const char *format, ...)
{

  int i, j;
  va_list arg;
  func_t func_ptr[] = {
    {"s", print_str},
    {"c", print_char},
    {NULL, NULL}
  };



  va_start(arg, format);

  i = 0;
  while(format && format[i])
  {
    j = 0;
    while(j < 2)
    {
      if ((format[i] == 37) && (format[i + 1] == *func_ptr[j].specifier))
      {
        func_ptr[j].print_func(arg);
        
        if (format[i + 1] == '\0')
          _putchar('\n');
      }
      j++;
    }
    i++;
  }
  va_end(arg);
  return 0;
}
