#include "variadic_functions.h"
#include "stdio.h"
#include "stdarg.h"

/**
 * print_strings - function
 * @separator: seperator
 * @n: number of args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");

	va_end(list);
}
