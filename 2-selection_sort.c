#include "sort.h"
/**
 * swap -  change positions xp for yp
 * @xp: minimun
 * @yp: older
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}
/**
 * selection_sort - algorithm selection_sort
 * @array: array of characters to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t step = 0;
	size_t j;

	for (step = 0; step < size - 2; step++)
	{
		size_t min = step;

		for (j = step + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		swap(&array[min], &array[step]);
		print_array(array, size);
	}
}
