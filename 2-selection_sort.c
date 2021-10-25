#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array
 * @size: size
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int num, flag;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		num = array[i];
		k = i;
		for (j = i; j < size; j++)
			if (array[j] < num)
			{
				num = array[j];
				k = j;
				flag = 1;
			}
		if (flag)
		{
			array[k] = array[i];
			array[i] = num;
			print_array(array, size);
		}
	}
}
