#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int ln = 0;
	int i;

	while (str[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i < ln; i+=2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
