#include <stdio.h>
/**
 * main - print if the number is positive, zero, negative
 *
 * Description: using the main funtion
 * this program prints "Numbers follwed by , and space
 * Return: 0 
 */
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
