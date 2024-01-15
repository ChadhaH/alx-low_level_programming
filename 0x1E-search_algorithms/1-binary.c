#include "search_algos.h"

/**
 * binary_search - function
 * @array: array
 * @size: size
 * @value: value
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t loop, one, two;

	if (array == NULL)
		return (-1);

	for (one = 0, two = size - 1; two >= one;)
	{
		printf("Searching in array: ");
		for (loop = one; loop < two; loop++)
			printf("%d, ", array[loop]);
		printf("%d\n", array[loop]);

		loop = one + (two - one) / 2;
		if (array[loop] == value)
			return (loop);
		if (array[loop] > value)
			two = loop - 1;
		else
			one = loop + 1;
	}

	return (-1);
}
