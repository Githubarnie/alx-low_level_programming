#include <stdio.h>
/**
 * main - print if the number is positive
 *
 * Description: using the main function
 * this program prints "Single digits 0-9
 * Return: 0
 */
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
