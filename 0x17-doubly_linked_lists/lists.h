#ifndef HEADER_DOUBLELINKEDLIST
#define HEADER_DOUBLELINKEDLIST
#include <stddef.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
 *print_dlistint - print doubly linked list
 *@h: doubly linked list
 *Return: size of the linked list
 */
size_t print_dlistint(const dlistint_t *h);
/**
 *dlistint_len - number of elements in doubly linked list
 *@h: doubly linked list
 *Return: size of the linked list
 */
size_t dlistint_len(const dlistint_t *h);
/**
 *add_dnodeint - adds a node to a doubly linked list
 *@head: head of linked list
 *@n: item to add to node
 *Return: added node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 *add_dnodeint_end - adds a node to the end of a doubly linked list
 *@head: head of linked list
 *@n: item to add to node
 *Return: added node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif
