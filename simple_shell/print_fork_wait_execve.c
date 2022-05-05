#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
  pid_t child_pid = 1;
  int status;
  int i = 0;
  
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
	  printf("Please wait child %d executing\n",i);
	  sleep(3);
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
