#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - integers of an array printed
 *
 * @array: print array
 * @size: elements in @array count
 */
void print_array(const int *array, size_t size)
{
	size_t k;

	k = 0;
	while (array && k < size)
	{
		if (k > 0)
			printf(", ");
		printf("%d", array[k]);
		++k;
	}
	printf("\n");
}
