#include "main.h"
#include <stddef.h>
#include <stdio.h>

int main(void)
{
  char *str;
  str = _getenv("PATH");
  if (str == NULL)
    printf("Variable not found\n");
  else
    printf("%s\n",str);
  return (0);
}
