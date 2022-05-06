#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork, wait, and execve example
 *
 * Return: Always 0.
 */
int main(void)
{
  pid_t child_pid = 1;
  int status;
  int i = 0;
  char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
  
  while (i < 5)
    {
      if (child_pid != 0 && child_pid != -1)
	{
	  printf("In fork\n");
	  child_pid = fork();
	}
      if (child_pid == -1)
	{
	  perror("Error:");
	  return (1);
	}
      if (child_pid == 0 && i == 4)
	{
	  printf("Please wait child executing\n");
	  execve(argv[0], argv, NULL);
	}
      else if (child_pid != 0 && child_pid != -1)
	{
	  wait(&status);
	  printf("Under parent control, creating new child\n"); 
	}
      i++;
    }
  return (0);
}
