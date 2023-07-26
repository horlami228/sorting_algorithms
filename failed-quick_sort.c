#include "sort.h"
/**
 * quick_sort - Quick sorting algorithm
 * partition: Function to split the array into subarrays
 * @array: Array to sort
 * @size: Size of the array
*/

/**
 * partition - Function to split the arrays into sub arrays
 * @array: Array to sort
 * @low: lower bound
 * @high: upper bound
 * Return: Return high index value
*/
int partition(int *array, int low, int high)
{
	int pivot, start, end, temp;

	pivot = array[high];
	start = low;
	end = high - 1;
	while (start <= end)
	{
		while (array[start] <= pivot && start <= end)
		{
			start++;
		}

		while (array[end] > pivot && start <= end)
		{
			end--;
		}
		if (start <= end)
		{
		temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		print_array(array, high - low + 1);
		}
	}
	temp = array[start];
	array[start] = array[high];
	array[high] = temp;

	return (start);
}

/**
 * quicksort_recursion - recursion function to repeatedly call
 * the partition function
 * with new subarrays
 * @array: Array to sort
 * @low: lower bound
 * @high: upper bound
*/
void quicksort_recursion(int *array, int low, int high)
{
	if (low < high)
	{
		int lock_value = partition(array, low, high);

		quicksort_recursion(array, low, lock_value - 1);
		quicksort_recursion(array, lock_value + 1, high);
	}
}
