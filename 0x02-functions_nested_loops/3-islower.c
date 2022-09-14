#include "main.h"

/**
 * _islower - print lower
 *
 * @c: c is c
 *
 * Return: 1
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
