#include "main.h"
#include <stddef.h>
#include <stdio.h>

int main(void)
{
  list_t *head = NULL;
  size_t printed;
  _build_path_linkedlist(&head);
  printed = print_list(head);
  printf("%zu", printed);
  return (0);
}
