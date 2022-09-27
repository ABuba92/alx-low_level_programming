#include "main.h"

/**
 * *_memset(char *s, char b, unsigned int n) - memset function to fill memory with constant byte
 * @b: constant byte
 * @n: bytes of the memory pointed by s
 * @s: pointer variable
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
