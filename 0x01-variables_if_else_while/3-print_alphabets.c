#include <stdio.h>
/**
 * main - print if the number is positive, zero, negative
 *
 * Description using the main function
 * this program prints "Alphbet in lowercase and in Uppercase
 * Return: 0;
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (alpha = 'A'; alpha <= 'Z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
