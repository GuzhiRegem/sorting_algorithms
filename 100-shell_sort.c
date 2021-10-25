#include "sort.h"

/**
 * swap - swap two indx of an array
 * @array: array to change
 * @idx1: first index
 * @idx2: second index
 * Return: void
 */
void swap(int *array, size_t idx1, size_t idx2)
{
}
/**
 * shell_sort - compares two nodes
 * @array: greater node
 * @size: smaller node
 * Return: 1 if true, 0 if false
 */
void shell_sort(int *array, size_t size)
{
	size_t sep = 1, i;

	if (!array)
		return;
	while (sep < size)
	{
		sep = (sep * 3) + 1;
	}
	while (sep > 1)
	{
		sep = sep / 3;
		printf("separation: %ld\n", sep);
		for(i = 0; i < (size - sep); i++)
		{
			printf("%d and %d\n", array[i], array[i + sep]);
		}
	}
}
