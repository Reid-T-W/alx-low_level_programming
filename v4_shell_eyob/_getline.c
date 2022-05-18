#include "main.h"
#include <unistd.h>
#include <stdio.h>

/*ssize_t read(int fd, void *buf, size_t count);
  ssize_t getline(char **restrict lineptr, size_t *restrict n, FILE *restrict stream);*/

char *_realloc(char *buf, long int *size);
  
int checkEndOfFile(char *buf, long int size)
{
  char *iterator;
  int found = 0;
  int i;

  iterator = buf;
  for (i = 0; i < size; i++)
    {
      if (*iterator == '\0')
	{
	  found = 1;
	  break;
	}
      iterator++;
    }
  return found;
}

int main (void)
{
  static char *buf = NULL;
  long int size = 2;
  char *start_point;
  
  buf = malloc(size);
  start_point = buf;
  read(0, buf, size);
  while (checkEndOfFile(start_point, size) == 0)
    {
      buf = _realloc(start_point, &size);
      start_point = buf;
      buf = start_point + (size/2);
      read(0, buf, (size/2));
    }
  printf("Read value: %s\n", start_point);
  free(start_point);
  return (0);
}

char *_realloc(char *buf, long int *size)
{
  char *iterator;
  int i;
  
  static char *new_buf;
  static char *start_new_buf;
  printf("In realloc\n");
  *size = (*size) * 2;
  new_buf = malloc((*size) * 2);
  start_new_buf = new_buf;
  iterator = buf;
  for (i = 0; i < (*size/2); i++) 
  {
      *new_buf = *iterator;
      new_buf++;
      iterator++;
    }
  free(buf);
  return start_new_buf;
}
