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
/**
 *free_listint - free a linked list from memory
 *@head: head of linked list
 *Return: void
 */
void free_listint(listint_t *head);
/**
 *free_listint2 - free a linked list from memory
 *@head: pointer to pointer of head of linked list
 *Return: void
 */
void free_listint2(listint_t **head);
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: head of linked list
 *Return: returns the head nodes data or 0 for empty list
 */
int pop_listint(listint_t **head);
/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *@head: head of linked list
 *@index: index to be returned
 *Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/**
 *sum_listint - returns the sum of all the data of a linked list
 *@head: head of linked list
 *Return: sum of data
 */
int sum_listint(listint_t *head);
/**
 *insert_nodeint_at_index - inserts a new node at an index
 *@head: head of linked list
 *@idx: index
 *@n: number
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
#endif /* HEADER_MORE_SINGLY_LINKED_LIST */
