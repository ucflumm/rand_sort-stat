#include "main.h"
/**
 * print_array - prints an array of integers
 * @array: array to print
*/

void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (!array)
		return;
	for (i = 0; i < size; i++)
		printf("%d\n", array[i]);
}