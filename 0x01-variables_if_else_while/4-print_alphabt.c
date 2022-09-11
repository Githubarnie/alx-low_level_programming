#include <stdio.h>
/**
 * main - print if the number is positive, zero, negative
 *
 * Decsription: using the main function
 * this program prints "Alphbet ,expect q and e
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}
