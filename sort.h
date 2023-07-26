#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void swap(int *array, int i, int j);
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lumoto_partition(int *array, int low, int high, size_t size);
void quick_sort_recursion(int *array, int low, int high, size_t length);
void merge_sort_recursion(int *array, int low, int high);
void merging(int *array, int low, int middle, int high);
void merge_sort(int *array, size_t size);
void print_check(int *temp_left, int *temp_right, int left, int right);
void check_for_more_element(int i, int j, int k,
int *array, int *temp_left, int *temp_right, int left_size, int right_size);



void quicksort_recursion(int *array, int low, int high);
int partition(int *array, int low, int high);


#endif /*SORT_H*/