#include "main.h"

/**
 * *_strcpy - function
 * @dest: string
 * @src: string
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int ln, i;

	ln = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}

	for (i = 0; i < ln; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
