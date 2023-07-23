#include "sort.h"

/**
 * make_heap - turn the array into heap
 * @array: array holding the integers
 * @size: size of the array
 * @i: index of the root element in the heap
 * @low: used as heap boundary
 */

void make_heap(int *array, size_t size, size_t low, int i)
{
	int max = i; /* root array*/
	size_t leftchild = 2 * max + 1;
	size_t rightchild = 2 * max + 2;

	if (leftchild < low && array[leftchild] > array[max])
		max = leftchild;
	if (rightchild < low && array[rightchild] > array[max])
		max = rightchild;

	if (max != i)
	{
		swap_int(&array[i], &array[max]);
		print_array(array, size);
		make_heap(array, size, low, max);
	}
}

/**
 * heap_sort - sort an array of integers in ascending
 * order using the Heap sort algorithm
 * @array: array holding the integers
 * @size: size of the array
 */
void heap_sort(int *array, size_t size)
{
	int index;

	if (size < 2)
		return;

	for (index = size / 2 - 1; index >= 0; index--)
	{
		make_heap(array, size, size, index);
	}
	for (index = size - 1; index > 0; index--)
	{
		swap_int(&array[0], &array[index]);
		print_array(array, size);
		make_heap(array, size, index, 0);
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
