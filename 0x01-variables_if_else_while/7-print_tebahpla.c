#include <stdio.h>
/**
 *
 * main - print all alphabet letters
 *
 * Description: using the main function
 * this progrsm prints "Alphabet from z to a
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
