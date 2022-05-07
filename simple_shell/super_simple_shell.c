#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>


void INThandler();

int main(int argc, char *argv[])
{
  char *line = NULL;
  char *line2 = NULL;
  size_t len = 0;
  ssize_t nread;
  ssize_t one = 1;
  int i;
  pid_t child_pid = 1;
  int status;

  
  signal(SIGINT, INThandler);
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
	      line2 = line;
	      line2[nread - one] = '\0';
	      argv[1] = line2;
	      argv[2] = NULL;
	      argc = 2;
	      for (i = 0; i < argc; i++)
		{
		  argv[i] = argv[i + 1];
		}
	      if (execve(argv[0], argv, NULL) == -1)
	      {
		perror("Error:");
	      }
	      free(line);
	      printf("Returned %d\n",getpid());
	      exit(0);
	}
      else
	{
	  wait(&status);
	  printf("parent");
	}
    }
  return (0);
}



/*Signal Handler*/
void  INThandler()
{
/*signal(sig, SIG_IGN);*/
    printf("In handler");
    kill(getppid(), 15);
    /* run = 0;*/
}


