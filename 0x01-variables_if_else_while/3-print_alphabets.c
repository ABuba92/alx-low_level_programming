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
char n = 'a';
char m = 'A';
for(n <= 'z');
{
putchar(n);
n++;
}
for(m <= 'Z');
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
