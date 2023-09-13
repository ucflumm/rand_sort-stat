#include "main.h"
/**
* main - main function
* @argc: argument counter
* @argv: argument vector
* Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	char opt;
	double time_spent;
	int *array;
	int i;
	time_t t;
	clock_t task_timer;
	/* char *arg = NULL; */

	srand((unsigned) time(&t));
	array = malloc(sizeof(int) * INT_ARRAY_SIZE);
	if (!array)
		return (1);
	
	for (i = 0; i < INT_ARRAY_SIZE; i++)
		array[i] = rand();

	/* TODO task time printout */
	if (argc != 2)
	{
		printf("Usage: %s -b <arg>\n", argv[0]);
		return (1);
	}

	while ((opt = getopt(argc, argv, ":if:bqph")) != -1)
	{
		switch(opt) 
		{
			case 'b':
				opt = 'b';
				printf("b: bubble_sort\n");
				return (0);
				break;
			case 'p':
				printf("p: print_array\n");
				task_timer = clock();
				print_array(array, INT_ARRAY_SIZE);
				task_timer = clock() - task_timer;
				time_spent = ((double)task_timer) / CLOCKS_PER_SEC;
				printf("Time elpased is %f seconds\n", time_spent);
				free(array);
				return (0);
				break;
			case 'q':
				printf("q: quick_sort\n");
				task_timer = clock();
				quick_sort(array, INT_ARRAY_SIZE);
				task_timer = clock() - task_timer;
				time_spent = ((double)task_timer) / CLOCKS_PER_SEC;
				printf("Time elpased is %f seconds\n", time_spent);
				return (0);
				break;
			case 'h':
				printf("h: help\n");
				break;
			default:
				printf("Usage: %s -b <arg>\n", argv[0]);
				return (1);
				break;
		}
	}
	return (0);
}