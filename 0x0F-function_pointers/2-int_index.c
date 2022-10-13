#include "function_pointers.h"
/**
 * int_index - search for integers
 * @array: array of ints
 * @size: number of elemets in array
 * @cmp: pointer to function for value comparison
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp || array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
