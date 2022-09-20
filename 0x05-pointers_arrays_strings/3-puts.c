#include "main.h"

/**
 * _puts - print a string followed by a new line to stdout
 * @str: string to print
 *
 * Description: print a string
 * 0n success: returns no error
 */

void _puts(char *str)
{
	int k = 0;

	while (*(str + k) != '\0')
	{
		putchar(*(str + k));
		k++;
	}
	putchar(10);
}
