#include "sort.h"

/**
 * partition - diide and conquer the elements
 * @size: size of the arrays
 * @array: array holding integers
 * @first: element on left side
 * @last: element on left side
 *
 * Return: unsorted partitioned arrays
 */

int partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	ssize_t j;
	int pivot = array[last];
	ssize_t i = first;

	for (j = first; j < last; j++)
	{
		if (array[j] <= pivot)
		{
			swap_int(&array[i], &array[j]);
			if (i != j)
			{
				print_array(array, size);
			}
			i++;
		}
	}
	swap_int(&array[i], &array[last]);
	if (i != j)
		print_array(array, size);

	return (i);
}

/**
 * quick_sort_two - function to implement the Quick sort algorithm
 * @first: integer at the beginning
 * @last: last element
 * @array: array holding elements
 * @size: array size
 */

void quick_sort_two(int *array, ssize_t first, ssize_t last, size_t size)
{
	if (first < last)
	{
		/* partition index is at the right place */
		int pi = partition(array, first, last, size);

		/*sort elements before and after partition*/
		quick_sort_two(array, first, pi - 1, size);
		quick_sort_two(array, pi + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: pointer to array of integers
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_two(array, 0, size - 1, size);
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
