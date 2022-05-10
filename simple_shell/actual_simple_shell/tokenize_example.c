#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

void INThandler();

int main(void)
{
  char *line;
  /* ssize_t nread;*/
  size_t len;
  char *str;


  getline(&line, &len, stdin);
  str = strtok(line," ");
  while (str != NULL)
    {
      printf("Arg %s\n",str);
      str = strtok(NULL," ");
    }
	  
  return (0);
}

