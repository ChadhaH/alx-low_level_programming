#include "main.h"

/**
 * _puts - puts a string to stdout
 * @str: the string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
