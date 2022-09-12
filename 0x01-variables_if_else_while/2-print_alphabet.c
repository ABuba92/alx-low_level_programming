#include <stdio.h>
/**
 * main - program starting point
 *
 * Description: printing the alphabet in lower case letters
 *
 * return: return 0
 */
int main (void)
{
char alphabet = 'a';
/*check to see if the alphabet is in lower case*/
while ( alphabet <= 'z' )
{
putchar(alphabet);
alphabet ++;
}
putchar('\n');
return (0);
}
