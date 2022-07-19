#ifndef SORT_H_
#define SORT_H_

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int *array, size_t a, size_t b);
void quick_sort(int *array, size_t size);
void recursive_quick_sort(int *array, size_t size, int start, int end);
size_t partition(int *array, size_t size, int start, int end);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);

void merge_sort(int *array, size_t size);
void merge_recur(int *arr, int *array, size_t left, size_t right);
void merge_subarray(int *arr, int *array, size_t left,
		size_t middle, size_t right);

void heap_sort(int *array, size_t size);
void __heap(int *array, size_t s, size_t root, size_t size);

void radix_sort(int *array, size_t size);
void count_sort_LSD(int *array, size_t size, size_t lsd);

void bitonic_sort(int *array, size_t size);
void bitonic_recursion(int *array, int l, int r, int direction, size_t size);
void bitonic_merge(int *array, int l, int r, int direction);

void quick_sort_hoare(int *array, size_t size);
void quick_recursion(int *array, int left, int right, size_t size);
int __partition(int *array, int left, int right, size_t size);

#endif /* SORT_H_ */
