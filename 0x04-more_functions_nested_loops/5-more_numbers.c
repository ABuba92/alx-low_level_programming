#include "main.h"

/**
 * more_numbers - print ten times the numbers from 0 to 14
 * Return: zero
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n');
}
