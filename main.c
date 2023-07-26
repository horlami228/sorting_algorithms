#include "sort.h"

int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 8, 12, 14, 
15, 20, 1, 7, 9, 10, 13, 1, 2, 11, 19, 20
};

int sorted[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(sorted) / sizeof(sorted[0]);
	print_array(sorted, n);
	putchar(10);

	merge_sort(sorted, n);
	putchar(10);
	print_array(sorted, n);
	putchar(10);

}