#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

extern char **environ;

void _build_path_linkedlist(list_t **head)
{
  int found = 1;
  const char *name = "PATH";
  /*char *environ_copy;
    char **end;*/
  char **environ_start_pointer = environ;
  char *path;
  char *path_start;
  char *iterator;
  char *token;
  
  printf("In build path function\n");
  while(*environ != NULL)
    {
      printf("In build path function (while loop)\n");
      found = _strcmp(*environ, name);
      if (found == 0)
	{
	  iterator = *environ;
	  /*path = malloc(sizeof(*environ)+1);*/
	  path = malloc(strlen(*environ));
	  path_start = path;
	  while (*iterator != '\0')
	    {
	      *path = *iterator;
	      /*printf("Path: %c\n",*path);*/
	      iterator++;
	      path++;
	    }
	  *path ='\0';
	  path = path_start;
	  /*printf("Path: %s\n",path);
	  printf("/in found\n");*/
	  /*Setting an end of string at the end of the PATH string*/
	  /*end = environ + 1;
	  **end = '\0';*/
	  /* Printing the environment variables and its values */
	  /*environ_copy = *environ;*/
	  /* Discarding the part before the equal sign */
	  token = strtok(path, "=");
	  printf("token before: %s",token);
	  /*while(*environ_copy != '=')
	    {
	      environ_copy++;
	    }
	  environ_copy++;
	  *environ = environ_copy;*/
	  /*Separately printing strings deliminated by a :*/
	  printf("Before while loop\n");
	  /*while (_strcmp_custom(token, "\0") != 0)*/
	  token = strtok(NULL, ":");
	  while(token != NULL)
	    {
	      printf("In while loop\n");
	      /* while(*environ_copy != ':' && *environ_copy != '\0')
		{
		  environ_copy++;
		}
	      *environ_copy = '\0';*/
	      printf("token: %s\n",token);
	      *head = add_node(head, token);
	      token = strtok(NULL, ":");
	      /*printf("head str %s\n", (*head)->str);*/
	      /*environ_copy++;
	       *environ = environ_copy;*/
	    }
	  environ = environ_start_pointer;
	  /*while(environ != NULL)
	    {
	      printf("environ %s\n", *environ);
	      environ++;
	    }*/
	  return;
	}
      environ++;
    }
   environ = environ_start_pointer;
  return;
}

int _strcmp(const char *str1, const char *str2)
{
  int similar = 1;
  
  while (*str1 == *str2)
    {
      str1++;
      str2++;
      if(*str1 == '=' && *str2 == '\0')
	{
	  similar = 0;
	  return similar;
	}
      else if(*str1 == '=' || *str2 == '\0')
	  {
	    return similar;
	  } 
    }
      return similar;
}
