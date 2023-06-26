#include "main.h"

/**
 * print_rev - prints reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	int ln = 0;
	int i;

	while (*s != '\0')
	{
		ln++;
		s++;
	}
	s--;
	for (i = ln; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
