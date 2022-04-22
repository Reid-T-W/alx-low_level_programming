#ifndef HEADER_LINKEDLIST
#define HEADER_LINKEDLIST
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
/**
 *print_list - prints all the elements of a linked list
 *@h: linked list to be printed
 *Return: the number of nodes
 */
size_t print_list(const list_t *h);
/**
 *list_len - counts the number of elements in a linked list
 *@h: linked list
 *Return: returns the number of elements in a linked list
 */
size_t list_len(const list_t *h);
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
 *add_node_end - adds a node to the end of a linked list
 *@head: head of linked list
 *@str: string to be added to node
 *Return: addresss of new node
 */
list_t *add_node_end(list_t **head, const char *str);
/**
 *free_list - free's the memory of a linked list
 *@head: head of a linked list
 *Return: void
 */
void free_list(list_t *head);
/**
 *print_before_main - function to be executed before main
 *Return: void
 */
void print_before_main(void) __attribute__((constructor));
#endif /* HEADER_LINKEDLIST */
