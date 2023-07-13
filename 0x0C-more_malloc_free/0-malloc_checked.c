#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: variable
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	retrun (ptr);
}
