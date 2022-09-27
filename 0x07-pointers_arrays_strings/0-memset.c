#include "main.h"

/**
 * _memset - set memory to array
 * @b: value to set
 * @n: n amount of times
 * @s: array to set
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
