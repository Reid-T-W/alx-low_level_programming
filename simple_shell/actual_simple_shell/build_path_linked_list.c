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
  char **environ_start_pointer = environ;
  char *path;
  char *path_start;
  char *iterator;
  char *token;
  
  while(*environ != NULL)
    {
      found = _strcmp(*environ, name);
      if (found == 0)
	{
	  iterator = *environ;
	  path = malloc(strlen(*environ));
	  path_start = path;
	  while (*iterator != '\0')
	    {
	      *path = *iterator;
	      iterator++;
	      path++;
	    }
	  *path ='\0';
	  path = path_start;
	  token = strtok(path, "=");
	  /*Separately printing strings deliminated by a :*/
	  token = strtok(NULL, ":");
	  while(token != NULL)
	    {
	      *head = add_node(head, token);
	      token = strtok(NULL, ":");	 
	    }
	  environ = environ_start_pointer;
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
