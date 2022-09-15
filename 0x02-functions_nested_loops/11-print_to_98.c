#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints
 *
 * @n: starting
 *
 * Return: void
 */

void print_to_98(int n)
{
	int lim = 98;

	if (n < lim)
	{
		while (n <= lim)
		{
			printf("%d", n);
			if (n != lim)
			{
				printf(", ");
			}
			else if (n == lim)
			{
				printf("\n");
			}
			n++
		}
	}
	else  if (n > lim)
	{
		while (n >= lim)
		{
			printf("%d", n);
			if (n != lim)
			{
				printf(", ");
			}
			else if (n == lim)
			{
				printf("\n");
			}
			n--;
		}
	}
	else
	{
		print("98\n");
	}
}
