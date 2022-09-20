#include "main.h"

/**
 * _strlen - returns the lenght of a given string
 * @s: string parameter
 * Return: o
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
