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
		for (j = 48; j <= 4952; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n');
}
