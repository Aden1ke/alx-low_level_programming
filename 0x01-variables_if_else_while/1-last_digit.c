#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main - assigning a random number to the variable n.
 * Return:0 (Success)
 */
int main(void)
{
	int n,m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10
if (m > 5)
{
printf("Last digit of %d
	return (0);
}
