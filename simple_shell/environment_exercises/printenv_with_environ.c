#include <stdio.h>

extern char **environ;

int main(void)
{
  /*char *copy = *environ;*/
  
  while (*environ != NULL)
    {
      printf("%s\n", *environ);
      environ++;
    }
  return (0);
}
