#include "main.h"

/**
 * issuper - check for uppercase character
 * Return: return one if character is uppercase, zero otherwise
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		putchar("%c: %d\n", c, _isupper(c));
		return (1);
	}
	else
	{
		return (0)
	}
}
