#include <stdio.h>

/**
 * main - main function
 * Return: 0 if success
 */
int main(void)
{
	char alp[26] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
