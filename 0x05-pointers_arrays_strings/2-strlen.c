#include "main.h"
#include <string.h>

size_t _strlen(const char *s)
{
size_t length = 0;

while (*s++)
length ++;

return length;
}