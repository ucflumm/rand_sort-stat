#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>

#define INT_ARRAY_SIZE 1000
#define NUM_RAND_MAX 65535
void bubble_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(int *array, size_t size);

/* quicksort helper functions */
void quick_sort_recursion(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
#endif
