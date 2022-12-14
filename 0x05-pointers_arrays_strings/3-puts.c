#include "main.h"

/**
 * _puts - print a string followed by a new line to stdout
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
