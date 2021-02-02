#include "sort.h"
/**
 *  swap - the code about bubble sort algorithm
 * @xp: array
 * @yp: size of array
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 *  bubble_sort - the code about bubble sort algorithm
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
