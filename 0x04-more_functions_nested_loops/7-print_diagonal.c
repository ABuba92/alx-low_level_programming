#include "main.h"

/**
 * print_diagonal - printing line diagonally
 * @n: character to be used
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar(98);
			_putchar('\n');
		}
	}
}
