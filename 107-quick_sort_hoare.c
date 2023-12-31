#include "sort.h"

/**
 * hoare - divide and conquer the elements
 * @size: size of the arrays
 * @array: array holding integers
 * @low: element on left side
 * @high: element on left side
 *
 * Return: unsorted partitioned arrays
 */

int hoare(int *array, int low, int high, size_t size)
{
	int pivot = array[low];
	int j = high + 1;
	int i = low - 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j) /* pointers meet */
			return (j);

		swap_int(&array[i], &array[j]);
		print_array(array, size);
	}
}

/**
 * quick_sort_helper -function to implement the Quick sort algorithm
 * @low: integer at the beginning
 * @high: last element
 * @array: array holding integers
 * @size: size of the arrays
 */

void quick_sort_helper(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = hoare(array, low, high, size);
		quick_sort_helper(array, low, pi, size);
		quick_sort_helper(array, pi + 1, high, size);
	}
}

/**
 * quick_sort_hoare - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: pointer to array of integers
 * @size: size of the array
 */

void quick_sort_hoare(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * swap_int - swap two integers
 * @a: first integer
 * @b: secod integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
