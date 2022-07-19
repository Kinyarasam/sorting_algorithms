#include "sort.h"

/**
 * merge_sort - sorts an array of integers in
 *	ascending order using the merge sort
 *	algorithm.
 * @array: pointer to the array to sort
 * @size: the number of elements in array
 *
 * Return: nothing.
 */
void merge_sort(int *array, size_t size)
{
	int *arr;

	if (!array || size < 2)
		return;

	arr = malloc(sizeof(int) * size);

	merge_recur(arr, array, 0, size);
	free(arr);
}

/**
 * merge_recur - recursive function that merge sorts an array
 * @arr: copy array
 * @array: array to merge sort
 * @left: index of the left element
 * @right: index of the right element
 *
 * Return: nothing.
 */
void merge_recur(int *arr, int *array, size_t left, size_t right)
{
	size_t middle;

	if (right - left > 1)
	{
		middle = (right - left) / 2 + left;
		merge_recur(arr, array, left, middle);
		merge_recur(arr, array, middle, right);
		merge_subarray(arr, array, left, middle, right);
	}
}

/**
 * merge_subarray - merges subarrays
 * @arr: copy array
 * @array: array to merge
 * @left: index of the left element
 * @right: index of the right element
 *
 * Return: nothing
 */
void merge_subarray(int *arr, int *array, size_t left, size_t middle, size_t right)
{
	size_t i, j, k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + left, middle - left);
	printf("[right]: ");
	print_array(array + middle, right - middle);

	for (i = left, j = middle; i < middle && j < right; k++)
	{
		if (array[i] < array[j])
			arr[k] = array[i++];
		else
			arr[k] = array[j++];
	}

	while (i < middle)
		arr[k++] = array[i++];

	while (j < right)
		arr[k++] = arr[j++];

	for (k = left, i = 0; k < right; k++)
		array[k] = arr[i++];

	printf("[Done]: ");
	print_array(array + left, right - left);
}
