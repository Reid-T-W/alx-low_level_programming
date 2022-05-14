#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
  while (*argv != NULL)
    {
      printf("argv %s\n", *argv);
      argv++;
    }
  printf("\n\n");
  while (*environ != NULL)
    {
      printf("environ %s\n", *environ);
      environ++;
    }
  return 0;
}
