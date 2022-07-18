#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending
 *	order using the Shell sort algorithm
 *	using Knuth sequence
 * @array: pointer to the array to sort
 * @size: number of elements in the array.
 *
 * Returns: Nothing.
 */
void shell_sort(int *array, size_t size)
{
	int in, out, value_to_insert;
	int interval = 1;
	int i = 0;

	while (interval <= (int) size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (out = interval; out < (int) size; out++)
		{
			value_to_insert = array[out];
			in = out;

			while (in > interval - 1 && array[in - interval] >= value_to_insert)
			{
				array[in] = array[in - interval];
				in -= interval;
			}
			array[in] = value_to_insert;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
		i++;
	}
}
