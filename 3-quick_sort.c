#include "sort.h"
#include <stdio.h>
/**
 * quick_sort - sorts an array of integers in ascending order
 *		using the quick sort sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 *
 * Returns: nothing.
 */
void quick_sort(int *array, size_t size)
{
	recursive_quick_sort(array, size, 0, size - 1);
}

/**
 * recursive_quick_sort - recursive part
 * @array: array to use
 * @size: size
 * @start: start index
 * @end: end index
 *
 * Returns: nothing
 */
void recursive_quick_sort(int *array, size_t size, int start, int end)
{
	int p;

	if (start < end)
	{
		p = partition(array, size, start, end);
		recursive_quick_sort(array, size, start, p - 1);
		recursive_quick_sort(array, size, p + 1, end);
	}
}

/**
 * partition - partition the array
 * @array: array to use
 * @size: size
 * @start: start index
 * @end: end index
 *
 * Return: partition index
 */
size_t partition(int *array, size_t size, int start, int end)
{
	int pivot = array[end];
	int i = start - 1;
	int j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j);
			print_array(array, size);
		}
	}
	swap(array, i + 1, end);
	print_array(array, size);
	return (i + 1);
}

/**
 * swap - swap variable values
 * @array: array to use
 * @a: index 1
 * @b: index 2
 *
 * Returns: nothing.
 */
void swap(int *array, size_t a, size_t b)
{
	int tmp;

	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
}
