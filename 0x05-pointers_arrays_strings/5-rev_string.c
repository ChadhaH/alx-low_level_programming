#include "main.h"

/**
 * rev_string - prints reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int ln;
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
