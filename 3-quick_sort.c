#include "sort.h"
/**
 * swap - Function to swap elements
 * @array: Array to sort
 * @i: Index on swap
 * @j: Index to swap
*/
void swap(int *array, int i, int j)
{
	int temp = array[i];

	array[i] = array[j];
	array[j] = temp;
}

/**
 * lumoto_partition - Function to split the arrays into sub arrays
 * @array: Array to sort
 * @low: lower bound
 * @high: upper bound
 * @size: size of the array
 * Return: Return the pivot index value
*/
int lumoto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];

	int i = low;
	int j;

	for (j = i; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(array, i, j);
			i++;
		}
		
	}

	swap(array, i, high);
	print_array(array, size);

	return (i);
}

/**
 * quick_sort_recursion - Function to recursively call the partition function
 * @array: Array to sort
 * @low: lower bound
 * @high: upper bound
 * @length: length of array
*/
void quick_sort_recursion(int *array, int low, int high, size_t length)
{
	if (low < high)
	{
		int lock = lumoto_partition(array, low, high, length);
		quick_sort_recursion(array, low, lock - 1, length);
		quick_sort_recursion(array, lock + 1, high, length);
	}
}

/**
 * quick_sort - Quick sort function
 * @array: Array to sort
 * @length: length of array
*/
void quick_sort(int *array, size_t length)
{
	quick_sort_recursion(array, 0, length - 1, length);
}
