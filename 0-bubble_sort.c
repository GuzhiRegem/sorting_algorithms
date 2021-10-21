#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: array
 * @size: size
 * Return: a
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, indx;
	int tmp, changes = 1;

	if (!array)
		return;
	indx = size - 1;
	while (changes)
	{
		changes = 0;
		for (i = 0; i < indx; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				changes++;
				print_array(array, size);
			}
		}
		indx--;
	}
}
