#include "sort.h"

/**
 * swap - positions two elements into an array
 *@array: array
 *@item1: elemnt of an array
 *@item2: element of an array
 */
void swap(int *array, int item1, int item2)
{
	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}
/**
 * shell_sort - sorts array of integers in ascedning
 * order using shell sort
 * @size: array of a size
 * @array: numbers with lists
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, k, index = 0;

	if (array == NULL || size < 2)
		return;
	while (gap < size / 3)
		gap = 3 * gap + 1;
	while (gap >= 1)
	{
		for (k = gap; k < size; k++)
			for (index = k; index >= gap &&
			(array[index] < array[index - gap]); index -= gap)
				swap(array, index, index - gap);
		print_array(array, size);
		gap /= 3;
	}
}
