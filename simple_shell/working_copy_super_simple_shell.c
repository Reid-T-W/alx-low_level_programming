#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
  char *line = NULL;
  size_t len = 0;
  ssize_t nread;
  ssize_t one = 1;
  int i;
  pid_t child_pid = 1;
  int status;

  while (1)
    {
      child_pid = fork();
      if (child_pid == -1)
	{
	  perror("Error:");
	  return (1);
	}
      if (child_pid == 0)
	{
              printf("#cisfun$ ");
	      nread = getline(&line, &len, stdin);
	      line[nread - one] = '\0';
	      argv[1] = line;
	      argv[2] = NULL;
	      argc = 2;
	      for (i = 0; i < argc; i++)
		{
		  argv[i] = argv[i + 1];
		}
	      execve(argv[0], argv, NULL);   
	}
      else
	{
	  wait(&status);
	}
    }
  return (0);
}
