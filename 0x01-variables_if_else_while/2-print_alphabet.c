#include <stdio.h>
/**
 * main - print the alphabet in lowercase letters
 *
 * Description: printing the alphabet in lower case letters
 *
 * Return: return 0
 */
int main(void)
{
char alphabet = 'a';
/*check to see if the alphabet is in lower case*/
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
