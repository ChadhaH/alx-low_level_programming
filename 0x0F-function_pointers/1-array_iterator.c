#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function
 * @size: size of the array
 * @array: array
 * @action: action to be done
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
