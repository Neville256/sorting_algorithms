# include "sort.h"

/**
 * selection_sort - sort array of integers in
 * ascending order using Selection sort
 * @array: pointer to the array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_num;

	for (i = 0; i < size - 1; i++)
	{
		min_num = i;
		for (j = i + 1; j < size; j++) /* find lowest number */
			if (array[j] < array[min_num])
				min_num = j;

		if (min_num != i)
		{
			swap_int(&array[min_num], &array[i]);
			print_array(array, size);
		}
	}
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
