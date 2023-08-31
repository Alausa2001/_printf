#include <unistd.h>
#include "main.h"

/* write to a file descriptor */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
