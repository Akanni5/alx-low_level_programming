#include "main.h"

/**
 * print_last_digit - print the last digit of n
 * @n: number
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	char last_digit = 0;

	if (n < 0)
	{
		last_digit = (n * -1) % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit);
	return (last_digit);
}
