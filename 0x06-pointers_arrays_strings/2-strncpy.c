#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string
 * @dest: string
 * @n: number
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
