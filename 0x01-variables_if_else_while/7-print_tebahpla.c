#include <stdio.h>
/**
 * main - main function
 *
 * Description: my description in reverse
 *
 * Return: return 0
 */
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
	putchar(i);
}
putchar('\n');
return (0);
}
