#include "main.h"

/**
 * print_alphabet - the function that prints alphabet
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
