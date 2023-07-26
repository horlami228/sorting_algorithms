#include "sort.h"
/**
 * selection_sort - Selection sorting algorithm
 * @array: Int Array
 * @size: Array size
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, mind_idx, temp;

	for (i = 0; i < size - 1; i++)
	{
		mind_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mind_idx])
			{
				mind_idx = j;
			}
		}

		if (mind_idx != i)
		{
			temp = array[i];
			array[i] = array[mind_idx];
			array[mind_idx] = temp;
			print_array(array, size);
		}

	}
}
