#ifndef SEARCH_H
#define SEARCH_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
};
typedef struct skiplist_s skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *check_lin(skiplist_t *list, int value, skiplist_t *stop);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);
void init_express(skiplist_t *list, size_t size);
skiplist_t *create_skiplist(int *array, size_t size);

#endif /* SEARCH_H */
