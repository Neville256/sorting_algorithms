#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: node stores an intger
 * @prev: previous element of list to pointer
 * @next: next element of list to pointer
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap_int(int *a, int *b);
void quick_sort_two(int *array, ssize_t first, ssize_t last, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, ssize_t first, ssize_t last, size_t size);
void quick_sort_hoare(int *array, size_t size);
void quick_sort_helper(int *array, int low, int high, size_t size);
int hoare(int *array, int low, int high, size_t size);
void heap_sort(int *array, size_t size);
void make_heap(int *array, size_t size, size_t low, int i);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
#endif
