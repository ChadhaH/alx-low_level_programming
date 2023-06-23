#include "main.h"

/**
 * _isupper - function that checks if a character is upper case
 * Return: 1 if success
 * @c: the character to be checked
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
