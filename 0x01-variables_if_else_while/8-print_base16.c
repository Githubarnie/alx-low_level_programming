#include <stdio.h>
/**
 * main - prints if the number is positive, zero, negative
 *
 * Description: using the main function
 * this program prints "The number combine with letter
 * Return: 0
 */
int main(void)
{
char ln;
for (ln = '0'; ln <= '9'; ln++)
{
putchar(ln);
}
for (ln = 'a'; ln <= 'f'; ln++)
{
putchar(ln);
}
putchar('\n');
return (0);
}
