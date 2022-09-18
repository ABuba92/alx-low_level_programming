#include "main.h"

/**
 * _isupper - function to test for uppercase letter
 * @c: character to be tested
 * Return: return 1 or 0
 */

int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
