#include <stdio.h>
/**
 * main - starting point of the program
 *
 * Description: displaying lower and uppercase letters
 *
 * Return: returning value
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
	putchar(n);
}
for (n = 'A'; n <= 'Z'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
