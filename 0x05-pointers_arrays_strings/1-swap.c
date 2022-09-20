#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: parameter1
 * @b: parameter2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
