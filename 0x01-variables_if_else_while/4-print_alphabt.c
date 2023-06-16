#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * Return: 0 if success
 */

int main(void)
{
	char alp[24] = "abcdefghijklmnorstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
