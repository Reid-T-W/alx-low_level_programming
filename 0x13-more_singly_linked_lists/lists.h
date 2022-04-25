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
/**
 *listint_len - determines the length of a linked list
 *@h: head of linked list
 *Return:number of elements in a linked list
 */
size_t listint_len(const listint_t *h);
/**
 *add_nodeint - adds a node at beginning of a linked list
 *@head: head of a singly linked list
 *@n: number to be added
 *Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n);
/**
 *add_nodeint_end - adds a node to the end of a linked list 
 *@head: head of the linked list
 *@n: number to be added
 *Return: Returns the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif /* HEADER_MORE_SINGLY_LINKED_LIST */
