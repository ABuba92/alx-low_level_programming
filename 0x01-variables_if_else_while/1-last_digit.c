#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: program starting point
 *
 * Description: displaying last digit of a given number
 *
 * Return: return o
 */
int main(void)
{
int n;
int m;
srand(time(0))
/*our own code will be displayed below*/
m= n % 10;
if(m > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n,m);
}
else if(m == 0)
{
	printf("Last digit of %d is %d and is 0\n:", n,m);
}
else
{
	print("Last digit of %d is %d and is less than 6 and not 0\n", n,m);
}
return (0);
}
