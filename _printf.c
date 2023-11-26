#include <stddef.h>
#include "main.h"

/**
 * _printf: A custom printf function that would function
 * like the std printf function in C
 *
 * note: For the specifiers that  have been handled, I havent
 * implemented the return value of _printf (no of printed characters)
 */



int _printf(const char *format, ...) {
  int i = 0;
  va_list arg;
  func_t func_ptr[] = {
    {"s", s_specifier},
    {"c", c_specifier},
    {"d", d_specifier},
    {"i", d_specifier},
    {"b", b_specifier},
    {"u", u_specifier},
    {"o", o_specifier},
    {"x", x_specifier},
    {"X", X_specifier},
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
