#include "main.h"

/**
 * print_last_digit - last
 *
 * @n: digit
 *
 * Return: value
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
	{
		l = (-1) * n;
	}

	_putchar(l + '0');

	return (l);
}
