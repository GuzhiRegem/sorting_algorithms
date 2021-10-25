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
	int tmp;

	tmp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = tmp;
}
/**
 * shell_sort - compares two nodes
 * @array: greater node
 * @size: smaller node
 * Return: 1 if true, 0 if false
 */
void shell_sort(int *array, size_t size)
{
	size_t sep = 1, i, tmp;

	if (!array)
		return;
	while (sep < size)
	{
		sep = (sep * 3) + 1;
	}
	while (sep > 1)
	{
		sep = sep / 3;
		for(i = 0; i < (size - sep); i++)
		{
			tmp = i;
			while (array[tmp] > array[tmp + sep])
			{
				swap(array, tmp, tmp + sep);
				if (tmp >= sep)
					tmp -= sep;
				else
					break;
			}
		}
		print_array(array, size);
	}
}
