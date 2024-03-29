#include <stdio.h>
#include "main.h"
/**
 *print_list - prints all the elements of a linked list
 *@h: linked list to be printed
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
  int nodes = 0;

  while (h != 0)
    {
      nodes++;
      if (h->str != 0)
	{
	  printf("[%d] %s\n", h->len, h->str);
	}
      else
	{
	  printf("[0] (nil)\n");
	}
      h = h->next;
    }
  return (nodes);
}
