#include "sort.h"

/**
 * bubble_sort - Sorts an array using while and for loops
 * @array: The array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t k;
	int temp, swapped = 1;

	if (!array || size < 2)
		return;

	while (swapped)
	{
		swapped = 0;
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
