#include "main.h"

/**
 * _isalpha - checks if the char is alpha
 * @c: char to be checked
 * Return: 1 is success
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
