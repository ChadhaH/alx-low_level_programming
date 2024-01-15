#include "search_algos.h"
/**
 * linear_search - function
 * @array: array
 * @size: size
 * @value: value
 * Return: index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t loop;

	if (array == NULL)
		return (-1);

	for (loop = 0; loop < (int)size; loop++)
	{
		printf("Value checked array[%u] = [%d]\n", loop, array[loop]);
		if (value == array[loop])
			return (loop);
	}
	return (-1);

}
