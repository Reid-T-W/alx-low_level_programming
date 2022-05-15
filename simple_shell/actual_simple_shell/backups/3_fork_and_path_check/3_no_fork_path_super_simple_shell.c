#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"

void INThandler();

int main(void)
{
  char *line = NULL;
  size_t len = 0;
  ssize_t nread;
  char *token;
  int j = 0;
  char **argv_copy;
  char *builtins[9] = {"mypid", "ppid", "cd", "exit", "env", "setenv", "unsetenv", "alias", NULL}; 


  signal(SIGINT, INThandler);
  while (1)
    {
      printf("#cisfun$ ");
      nread = getline(&line, &len, stdin);
      line[nread - 1] = '\0';
      printf("line %s\n", line);
      /*Will be part of process input*/
      token = strtok(line, " ");
      j = 0;
      /*argv_copy = malloc(sizeof(line)+1);*/
      argv_copy = malloc(1024);
      while (token != NULL)
	{
	  argv_copy[j] = token;
	  token = strtok(NULL, " ");
	  j++;
	}
      argv_copy[j] = NULL;
      /*free(line);*/
      printf("Before checking path\n");
      /*Check if the command exists and getting the correct commands*/
      argv_copy[0] = check_path(argv_copy[0],&*builtins);
      printf("After checking path\n");
      printf("argv_copy[0] %s\n",argv_copy[0]);
      /*Fork and execute if the command exists*/
      if (argv_copy[0] != NULL)
	{
	  fork_and_execute(argv_copy);
	}
      else
	{
	  perror("Error 2: Command does not exist");
	}
      /*free(line);*/
      /*free(argv_copy);*/
    }
      return (0);
}

/*Signal Handler*/
void  INThandler()
{
  printf("In handler\n");
  kill(getppid(), 15);
}

/*Check if the command exists and return the correct command*/
char *check_path(char *command, char **builtins)
{
  list_t *head = NULL;
  list_t *head_copy;
  char *temp;
  struct stat st;
  int b_found = 1;

  /*Check if the command is built in*/
  printf("Before while loop\n");
  /*printf("In check command %s\n",command);
  printf(*/
  while (*builtins != NULL)
    {
      printf("After while loop %s\n",*builtins);
      b_found = _strcmp_custom(*builtins, command);
      if (b_found == 0)
	{
	  return (command);
	}
      builtins++;
    }  
  /*Check if the command is an absolute path*/
  if (stat(command, &st) == 0)
    {
      return (command);
    }
  /*Check if the command exists in directories listed in path*/
  printf("Checking the third command\n");
  if (head == NULL)
    {
      printf("In build path\n");
      _build_path_linkedlist(&head);
    }
  head_copy = head;
  while (head_copy != NULL)
    {
      printf("command: %s\n",command);
      temp = _strcat(head_copy->str, command);
      printf("temp: %s\n",temp);
      if (stat(temp, &st) == 0)
	{
	  return (temp);
	}
      else
	{
	  head_copy = head_copy -> next;
	}
    }
  /*free(head);*/
  /*head = NULL;*/
  return (NULL);
}

void fork_and_execute(char **argv_copy)
{
  int status;
  pid_t child_pid = 1;

  child_pid = fork();
  if (child_pid == -1)
    {
      perror("Error:");
      return;
    }
  if (child_pid == 0)
    {
      printf("In child");
      if (execve(argv_copy[0], argv_copy, NULL) == -1)
	{
	  perror("Error:");
	}
      exit(0);
      }
  else
    {
      wait(&status);
      printf("In parent\n");
      }
  return;
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
  printf(" In destination %s\n",dest);
  return dest;
}
