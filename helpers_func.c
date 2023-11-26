#include <unistd.h>
#include "main.h"

/* write to a file descriptor */
int _putchar(char c)
{
    return (write(1, &c, 1));
}


/* return the length of a string */
int _strlen(char *s)
{
  int len = 0;
  while(*s++)
  {
    len++;
  }
  return (len);
}


/* print_num: print decimals
 * 
 * note: I'll refactor when I need other functionalities
 * */

int print_num(int num)
{
  int rem;

  if (num > 0)
  {
    rem = num % 10;
    num /= 10;
    print_num(num);
    _putchar(rem + 48);
  }
  return 0;
}



/**
 * printbase: convert a decimal to the specified number base (excluding hexadecimal)
 * num: the number to convert
 * base: the base the number is to be converted to
 */

int print_base(int num, int base)
{
  int rem;

  if (num > 0 && base > 0)
  {
    rem = num % base;
    num /= base;
    print_base(num, base);
    _putchar(rem + 48);
  }
  return 0;
}


/**
 * printhex: convert a decimal to hexadecimal
 * num: the number to convert
 * specifier: The specifier x or X
 */

int printhex(int num, char specifier)
{
  int rem;

  if (num > 0 && specifier)
  {
    rem = num % 16;
    num /= 16;
    printhex(num, specifier);
    if (specifier == 'x' && rem > 9)
      _putchar(rem + 87);
    else if (specifier == 'X' && rem > 9)
      _putchar(rem + 55);
    else
      _putchar(rem + 48);
  }
  return 0;
}
