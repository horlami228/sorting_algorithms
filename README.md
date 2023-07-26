This repository contains sorting algorithms
===
project 0-bubble-sort.c: I created a bubble sort algorithm for sorting integers or alphabets, it works by looping through the list repeatedly and comparing element side by side. if the left is greater than the right element, a swapping would occur. This function runs on two loops which makes the best case scenerio O(n ^ 2). Bubble sort is typically used for small data sets or in cases where perfomance is not taken seriously.

project 1-insertion_sort_lisc.c: I created a insertion sort algorithm for a doubly linked list that works by having a sorted and unsorted part in the list. we move from the second pointer and we compare it with the previous of it. if the previous is greater we make a right shift for the previous and directly insert the key in the sorted part. The loop continues and moves to the next element in the array or linked list.

project 2-selection_sort.c: I created  a selection sort algorithm that loops through the list repeatedly picking the first element and finding a less number by travesing through the loop until the end. it stores the last lesser number index in a variable and that value is swapped after the end of the inner loop. if the index is the same thing as the outter loop, it means there was no swap and the outter loop continues to the next element until all element in the list are touched.


project 3-quick_sort.c: I created a quick sort algorithm that uses the divide and conquer technique to create subarrays until the list is sorted i.e one element in the array. We use the lomuto partition schemee where we choose the last index value as the pivot and then build the other elements around it. Every element less than the pivot comes to the front and element greater than pivot goes to the back.


project 100-merge_sort.c: I created a merge sort algorithm. This sorting algorithm is widely used particulary on large data sets, it recursively splits the array into two sub-arrays from the middle index. The function then merges the two subarrays by putting them into temporary left and right arrays. It compares the value of the first element in the left array with the first element in the right array. which ever is the lowest goes into the array first. If one subarray becomes exhausted the other subarray elements will get added to the list. The function succesfully sorts the array.


