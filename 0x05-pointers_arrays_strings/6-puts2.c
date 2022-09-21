#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string char
 *
 * Return: void
 */

void puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}

	putchar('\n');
}
