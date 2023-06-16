#include <stdio.h>

/**
 * main - the main function
 * return: 0 if success
 */

int main(void)
{
	char num[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
