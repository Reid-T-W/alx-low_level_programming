#ifndef HEADER_LINKEDLIST
#define HEADER_LINKEDLIST
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
#endif /* HEADER_LINKEDLIST */
