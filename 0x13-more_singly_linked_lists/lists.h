#ifndef HEADER_MORE_SINGLY_LINKED_LIST
#define HEADER_MORE_SINGLY_LINKED_LIST
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
/**
 *print_listint - prints all the elements in a linked list
 *@h: head of linked list
 *Return: number of items printed
 */
size_t print_listint(const listint_t *h);
#endif /* HEADER_MORE_SINGLY_LINKED_LIST */
