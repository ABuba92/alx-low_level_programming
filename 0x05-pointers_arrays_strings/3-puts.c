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
	int len = 0;

	while (*(str + len) != '\0')
	{
		putchar(*(str + len));
		len++;
	}
	putchar(10);
}
