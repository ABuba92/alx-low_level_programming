#include "main.h"

/**
 * issuper - check for uppercase character
 * @c: character to be tested
 * Return: return one if character is uppercase, zero otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
