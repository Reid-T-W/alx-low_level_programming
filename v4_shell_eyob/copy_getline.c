#include "main.h"
#include <unistd.h>
#include <stdio.h>

/*ssize_t read(int fd, void *buf, size_t count);
  ssize_t getline(char **restrict lineptr, size_t *restrict n, FILE *restrict stream);*/

/*ssize_t _getline(char **lineptr, size_t n, FILE stream)*/
char *_realloc(char *buf, long int *size);
  
int checkEndOfFile(char *buf, long int size)
{
  char *iterator;
  int found = 0;
  int i;

  printf("In check end of file\n");
  iterator = buf;
  for (i = 0; i < size; i++)
    {
      printf("buf value: %s\n", iterator);
      if (*iterator == '\0')
	{
	  printf("In found\n");
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
  /*printf("No of bytes read %lu: ",(unsigned long int)read(0, buf, size));*/
  read(0, buf, size);
  printf("Read value: %s\n", start_point);
  while (checkEndOfFile(start_point, size) == 0)
    {
      buf = _realloc(start_point, &size);
      start_point = buf;
      buf = start_point + (size/2);
      /*for (i = 0; i < size/2; i++)
	{
	}*/
      /*buf = start_point + (size/2);*/
      read(0, buf, (size/2));
      printf("Read value in loop: %s\n", start_point);
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
  /*while (* != '\0')*/
  for (i = 0; i < (*size/2); i++) 
  {
      *new_buf = *iterator;
      /*printf("new_buf %s\n",*new_buf);*/
      new_buf++;
      iterator++;
    }
  free(buf);
  return start_new_buf;
}
