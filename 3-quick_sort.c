#include "sort.h"

/**
 * swap - swap two values of array
 * @array: array to swap
 * @idx1: first index
 * @idx2: second index
 * Return: nothing
 */
void swap(int *array, int idx1, int idx2)
{
	int num;

	num = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = num;
}

/**
 * rec - quick sort
 * @array: array
 * @size: size
 * @ori: original array
 * @ori_s: original size
 * Return: nothing
 */
void rec(int *array, size_t size, int *ori, size_t ori_s)
{
	size_t i, j;
	int pivot;

	if (size <= 2)
	{
		if (size == 2)
			if (array[0] > array[1])
			{
				swap(array, 0, 1);
				print_array(ori, ori_s);
			}
		return;
	}
	j = 0;
	pivot = array[size - 1];
	for (i = 0; i < size; i++)
	{
		if (array[i] <= pivot)
		{
			if (i != j)
			{
				swap(array, i, j);
				print_array(ori, ori_s);
			}
			j++;
		}
	}
	rec(array, j - 1, ori, ori_s);
	rec(&array[j], size - j, ori, ori_s);
}

/**
 * quick_sort - quick sort
 * @array: array
 * @size: size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	rec(array, size, array, size);
}
