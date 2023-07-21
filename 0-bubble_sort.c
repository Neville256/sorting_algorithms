#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t k, index;
    int tmp;

    if (size < 2)
        return;

    for (k = 0; k < size - 1; k++)
    {
        for (index = 0; index < size - 1 - k; index++)
        {
            if (array[index] > array[index + 1])
            {
                tmp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = tmp;
                print_array(array, size);
            }
        }
    }
}
