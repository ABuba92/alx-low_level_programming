#include <stdio.h>

/**
 * main - main function
 * @void - no args
 * Return: void
 */

int main(void)
{
	int sum = 0;
	int i = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;

	printf("%d\n", sum);
	return (0);
}
