#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: pointer to array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, swapped = 1;

	if (array == NULL || size < 2)
		return;

	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
