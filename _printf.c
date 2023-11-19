#include <stddef.h>
#include "main.h"



int _printf(const char *format, ...) {
  int i = 0;
  va_list arg;
  func_t func_ptr[] = {
    {"s", print_str},
    {"c", print_char},
    {"d", print_int},
    {"i", print_int},
    {"b", print_bin},
    {NULL, NULL}
  };

  va_start(arg, format);

  while (format && format[i]) {
    int j = 0;
    if (format[i] == '%' && format[i + 1]) {
      while (func_ptr[j].specifier) {
        if (format[i + 1] == *func_ptr[j].specifier) {
          func_ptr[j].print_func(arg);
          i++;
          break;
        }
        else if (format[i + 1] == '%') {
          _putchar('%');
          i++;
          break;
        }
        j++;
      }
    } else {
      _putchar(format[i]);
    }
    i++;
  }

  va_end(arg);
  return 0;
}
