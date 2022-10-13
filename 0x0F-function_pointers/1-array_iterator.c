#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h> 
#include <stdlib.h>
/**
 * array_iterator - entry array
 * @size: size of the array
 * @action: pointer to function needed
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
