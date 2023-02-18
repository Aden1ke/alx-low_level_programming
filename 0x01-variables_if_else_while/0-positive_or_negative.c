#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - i am to assigns n as a variable to determine what variable it is.
 * Return:0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
prinf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else(n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
