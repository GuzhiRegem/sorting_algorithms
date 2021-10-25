#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array
 * @size: size
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int num, num2;

	for (i = 0; i < size; i++)
	{
		num = array[i];
		for (j = i; j < size; j++)
			if (array[j] < num)
			{
				num2 = num;
				num = array[j];
				array[j] = num2;
				array[i] = num;
			}
		print_array(array, size);
	}
}
