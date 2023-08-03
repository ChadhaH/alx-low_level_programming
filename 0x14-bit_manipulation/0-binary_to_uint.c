#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function
 * @b: variable
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pwr;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pwr = 1, sum = 0, len--; len >= 0; len--, pwr *= 2)
	{
		if (b[len] == '1')
			sum += pwr;
	}
	return (sum);
}
