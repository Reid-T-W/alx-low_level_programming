#include <stdio.h>
#include <string.h>
#include "main.h"

extern char **environ;

void _build_path_linkedlist(list_t **head)
{
  int found = 1;
  const char *name = "PATH";
  char *environ_copy;
  char **end;
  /*list_t *head = NULL;*/
  /*size_t print_size;*/
  while(*environ != NULL)
    {
      found = _strcmp(*environ, name);
      
      if (found == 0)
	{
	  /*Setting an end of string at the end of the PATH string*/
	  end = environ + 1;
	  **end = '\0';
	  /* Printing the environment variables and its values */
	  environ_copy = *environ;
	  printf("%s\n", *environ);
	  
	  /* Discarding the part before the equal sign */
	  while(*environ_copy != '=')
	    {
	      environ_copy++;
	    }
	  environ_copy++;
	  *environ = environ_copy;

	  /*Separately printing strings deliminated by a :*/
	  while (**environ != '\0')
	    { 
	      while(*environ_copy != ':' && *environ_copy != '\0')
		{
		  environ_copy++;
		}
	      *environ_copy = '\0';
	      /* printf("%s\n", *environ);*/
	      *head = add_node(head, *environ);     
	      environ_copy++;
	      *environ = environ_copy;
	    }
	  /*print_size = print_list(head);
	    printf("%zu", print_size);*/
	  return;
	}
      environ++;
    }
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
