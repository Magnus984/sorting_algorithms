#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending
 * order using selection sort
 * @array: pointer to array to be sorted
 * @size: size of array
 *
 * Return: no return value
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	unsigned int i, j, small;

	for (i = 0; i < size; i++)
	{
		small = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[small])
				small = j;
		}
		if (i != small)
		{
			temp = array[i];
			array[i] = array[small];
			array[small] = temp;
			print_array(array, size);
		}
	}
}
