#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"

void INThandler();

int main(int argc, char *argv[])
{
  char *line = NULL;
  size_t len = 0;
  ssize_t nread;
  pid_t child_pid = 1;
  int status;
  char *token;
  int j = 0;


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
	      line[nread - 1] = '\0';
	      token = strtok(line, " ");
	      j = 0;
	      while (token != NULL)
		{
		  argv[j] = token;
		  token = strtok(NULL, " ");
		  argc++;
		  j++;
		}
	      argc--;
	      argv[j] = NULL;
	      if (execve(argv[0], argv, NULL) == -1)
		{
		  argv[0] = check_path(argv);
		  printf("Main function %s\n", argv[0]);
		  if (execve(argv[0], argv, NULL) == -1)
		    {
		      perror("Error:");
		    }
		}
	      free(line);
	      printf("Returned %d\n",getpid());
	      exit(0);
	}
      else
	{
	  wait(&status);
	  printf("In parent\n");
	}
    }
  return (0);
}



/*Signal Handler*/
void  INThandler()
{
/*signal(sig, SIG_IGN);*/
    printf("In handler\n");
    kill(getppid(), 15);
    /* run = 0;*/
}


char *check_path(char *command[])
{
  list_t *head = NULL;
  list_t *head_copy;
  char *temp;
  struct stat st;

  _build_path_linkedlist(&head);
  head_copy = head;
  while (head_copy != NULL)
    {
      temp = _strcat(head_copy->str, command[0]);
      if (stat(temp, &st) == 0)
	{
	  return temp;
	}
      else
	{
	  head_copy = head_copy -> next;
	}
    }
  return command[0];
}

char * _strcat(char *dest, char *source)
{
  char *dest_copy = dest;
  char *source_copy = source;
  
  while(*dest_copy != '\0')
    {
      dest_copy++;
    }
  *dest_copy = '/';
  dest_copy++;
  while (*source_copy != '\0')
    {
      *dest_copy = *source_copy;
      source_copy++;
      dest_copy++;
    }
  *source_copy = '\0';
  return dest;
}
  
