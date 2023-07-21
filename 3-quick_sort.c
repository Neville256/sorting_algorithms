#include "sort.h"

/**
 * partition - diide and conquer the elements
 * @size: size of the arrays
 *
 * Return: unsorted partitioned arrays
 */

int partition(int *array, ssize_t first, ssize_t last)
{
	ssize_t j;
	int pivot = array[last];
	ssize_t i = (first - 1);

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < pivot)
		{
			i += 1;
			swap_int(&array[i], &array[j]);
			print_array(array, last + 1);
		}
	}
	swap_int(&array[i + 1], &array[last]);
	print_array(array, last + 1);

	return (i + 1);
}

/**
 * quick_sort -function to implement the Quick sort algorithm
 * @first: integer at the beginning
 * @last: last element
 */

void quick_sort_two(int *array, ssize_t first, ssize_t last)
{
	if (first < last)
	{
		/* partition index is at the right place */
		int pi = partition(array, first, last);

		/*sort elements before and after partition*/
		quick_sort_two(array, first, pi - 1);
		quick_sort_two(array, pi + 1, last);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using the Quick sort algorithm
 * @array: pointer to array of integers
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_two(array, 0, size - 1);
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
