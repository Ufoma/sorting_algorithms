#include "sort.h"

/**
 * bubble_sort - sort array elements in ascending order
 * @array:  array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t ind;
	int temp; /* temporary variable for swaps */

	if (size < 2) 
/* Check if array size is less than 2 */
	return;

for (size_t i = 0; i < size; i++)
	/* outer loop */
{
	for (ind = 0; ind < size - i - 1; ind++)
		/*inner loop for swapping*/
	{
	if (array[ind] > array[ind + 1])
	{
		    /*  Swap elements */
		    temp = array[ind];
		    array[ind] = array[ind + 1];
		    array[ind + 1] = temp;

		    /* Print array after each swap */
		    print_array(array, size);
	}
	}
}
}
