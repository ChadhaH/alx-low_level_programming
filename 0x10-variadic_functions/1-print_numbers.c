#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (seperator != NULL)
			printf("%d", va_arg(list, int));
		else if (seperator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
