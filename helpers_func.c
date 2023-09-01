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
