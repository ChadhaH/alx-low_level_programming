#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10times
 */
void print_alphabet_x10(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		int j;
		char str[] = "abcdefghijklmnopqrstuvwxyz";
		
		for (j = 0; j < 26; j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
	}
}
