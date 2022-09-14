#include "main.h"

/**
 * print_alphabet - prints
 *
 * Description: Prints alphabet
 *
 * Return: return type
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
