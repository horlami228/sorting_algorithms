#include "sort.h"
/**
 * bubble_sort - A bubble sort sorting algorithm
 * @array: Array to work with
 * @size: Size of the array
*/


void bubble_sort(int *array, size_t size)
{
	int i, j; /*array index*/
	int swapped; /*activator for swap*/

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			/*compare element values*/
			if (array[j] >= array[j + 1])
			{
				swapped = 1;
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				/*print array at each step*/
				print_array(array, size);
			}
		}


		if (swapped == 0)
		{
			break;
		}


	}
}
