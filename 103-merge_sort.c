#include "sort.h"
/**
 * merge_sort_recursion - Recusrion function that divides array into sub array
 * @array: Array to sort
 * @low: lower bound index
 * @high: upper bound index
*/
void merge_sort_recursion(int *array, int low, int high)
{
	if (low < high)
	{
		int middle = low + (high - low) / 2;

		merge_sort_recursion(array, low, middle);
		merge_sort_recursion(array, middle + 1, high);
		merging(array, low, middle, high);
	}
}

/**
 * merging - This function swaps and merge elements from two subarrays
 * @array: Array to merge
 * @low: lower bound index
 * @high: upper bound index
 * @middle: middle index
*/
void merging(int *array, int low, int middle, int high)
{
	int left_size = middle - low + 1;
	int right_size = high - middle;
	int temp_left[left_size];
	int temp_right[right_size];

	for (int i = 0; i < left_size; i++)
	{
		temp_left[i] = array[low + i];
	}
	for (int i = 0; i < right_size; i++)
	{
		temp_right[i] = array[middle + i + 1];
	}
	printf("Merging...\n");
	printf("[left]: ");
	print_array(temp_left, left_size);
	printf("[right]: ");
	print_array(temp_right, right_size);

	int i = 0;
	int j = 0;
	int k = low;

	while (i < left_size && j < right_size)
	{
		if (temp_left[i] <= temp_right[j])
		{
			array[k] = temp_left[i];
			i++;
		}
		else
		{
			array[k] = temp_right[j];
			j++;
		}
		k++;
	}

	while (i < left_size)
	{
		array[k] = temp_left[i];
		k++;
		i++;
	}
	while (j < right_size)
	{
		array[k] = temp_right[j];
		j++;
		k++;
	}
	printf("[Done]: ");
	print_array(array, k);
}
/**
 * merge_sort - Merge sort function that calls the recursive function
 * @array: Array to sort
 * @size: size of array
*/
void merge_sort(int *array, size_t size)
{
	merge_sort_recursion(array, 0, size - 1);
}
