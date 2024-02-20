#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 **/
void quick_sort(int *array, size_t size)
{
	size_t i, j;
	int pivot, temp;

	if (size < 2)
	{
		return;
	}

	pivot = array[size - 1];

	i = 0;

	for (j = 0; j < size; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
		}
	}

	temp = array[i];
	array[i] = array[size - 1];
	array[size - 1] = temp;

	print_array(array, size);

	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
