#include "sort.h"
/**
 *  bubble_sort - the code about bubble sort algorithm
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t j = 0, i = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
		print_array(array, size);
	}
}