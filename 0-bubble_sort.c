#include "sort.h"
/**
 * bubble_sort - sorts an array in ascending order
 * using the bubble sort algorithm
 * @array: pointer to array
 * @size: size of array
 *
 * Return: no return value
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	unsigned int j, i;

	/*loop for the passes*/
	for (i = 0; i < size; i++)
	{
		/*looping through array*/
		for (j = 0; j < size - 1; j++)
		{
			/*comparing and performing swap*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
