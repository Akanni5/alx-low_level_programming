#include "variadic_functions.h"

/**
 * print_strings - followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if ((!separator || (separator && !i)) && str)
			printf("%s", str);
		else if (!str)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, str);
	}
	va_end(args);
	printf("\n");
}
