#include "main.h"

/**
 * puts_half - prints half string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int ln = 0;
	int i;
	
	while (str[ln] != '\0')
	{
		ln++;
		str++;
	}
	if (ln % 2 != 0)
	{
		for (i = (ln - 1) / 2; i < ln -1; i++)
		{
			_putchar(str[i + 1]);
		}	
	}
	else if (ln % 2 == 0)
	{
		for (i = ln / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
