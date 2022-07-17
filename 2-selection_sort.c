#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 *	ascending order bu using the Selection sort algorithm
 * @array: pointer to the array
 * @size: number of elements in array
 *
 * Returns: nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, Min_j;

	for (i = 0; i <= size; i++)
	{
		Min_j = i; /*consider the first element as min*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[Min_j])
				Min_j = j;
		}

		if (Min_j != i)
		{
			swap(array, i, Min_j);
			print_array(array, size);
		}
	}
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
