#include "main.h"

/**
 * int_islower - print lower
 *
 * Return: 1
 */

void int _islower(int c)
{
	char c;

	if (islower(c))
	{
		_putchar(c);
	}
	else
	{
		return (0);
	}
}
