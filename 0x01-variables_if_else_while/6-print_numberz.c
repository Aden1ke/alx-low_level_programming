/**
 * main - Write a that prints all single digit numbers of base 10 from 0.
 * Return:0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
puchar(num + '0');
}
putchar('\n');
return (0);
}
