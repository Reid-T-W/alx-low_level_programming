#ifndef HEADER_SIMPLE_SHELL
#define HEADER_SIMPLE_SHELL
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
extern char **environ;
typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
} list_t;
/**
 *add_node - adds a new node
 *@head: head of linked list
 *@str: string to be added to node
 *Return: address of newly added node
 */
list_t *add_node(list_t **head, const char *str);
/**
 *string_length - determines the length of a string
 *@str: input string
 *Return: length of string
 */
int string_length(const char *str);
/**
 *print_list - prints all the elements of a linked list
 *@h: linked list to be printed
 *Return: the number of nodes
 */
size_t print_list(const list_t *h);
int _strcmp(const char *str1, const char *str2);
void _printpath();
void _build_path_linkedlist(list_t **head);
int _strcmp_custom(const char *str1, const char *str2);
/*char *check_path(char *command[]);*/
/*char *check_path(char *command);*/
void fork_and_execute(char **argv_copy);
char *check_path(char *command, char **builtins);
char *_strcat(char *dest, char *source);
#endif /*HEADER_SIMPLE_SHELL*/
