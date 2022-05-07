#include <stdio.h>

extern char **environ;

int main(int argc, char **argv, char **env)
{
  printf("Address of param env: %p\n", (void *)&env);
  printf("Address of variable environ: %p\n\n", (void *)&environ);
  printf("Value of param env: %p\n", (void *)*env);
  printf("Value of variable environ: %p\n", (void *)*environ);
  return (0);
}
  
