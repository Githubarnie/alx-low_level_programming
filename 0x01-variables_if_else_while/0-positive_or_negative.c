#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Description using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return:0
 */

/* betty style doc for function main goes there
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0)
	{
		printf("%d is zero\n", n);
	}
	else if(n>0)
	{
		printf("%d is positive\n", n);
	}
	else(n<0)
	{
		printf("%d is negative\n", n);
	}
	return 0;
}
